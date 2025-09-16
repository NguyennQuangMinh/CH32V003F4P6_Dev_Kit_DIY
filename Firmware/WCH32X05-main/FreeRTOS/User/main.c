#include "debug.h"
#include "FreeRTOS.h"
#include "task.h"
#include "ch32x035_conf.h"

#include "user.h"
#include "queue.h"
#include "gpio.h"
#include <stdbool.h>
//#include "cJSON.h"

/* Global define */
#define TASK1_TASK_PRIO     5
#define TASK1_STK_SIZE      256
#define TASK2_TASK_PRIO     5
#define TASK2_STK_SIZE      256

/* Global Variable */
TaskHandle_t Task1Task_Handler;
TaskHandle_t Task2Task_Handler;
TaskHandle_t Task3Task_Handler;
xQueueHandle q;

u8 RTCmonth, RTCyear, RTCday, RTCdate;
u8 RTCsec, RTChour, RTCmin;
u8 prevSec;
bool dotBlinkState;

void task1_task(void *pvParameters) {
    u16 received;
    button_Init();
    while(1)
    {
        if (xQueueReceive(q, &received, portMAX_DELAY)) {

            printf("\r\n task 1 NHAN QUEUE:%d\r\n",received);
            RTC_Read_Time();
            RTC_Read_Date();
            User_Config my;
            my.h=RTChour;
            my.m=RTCmin;
            my.s=RTCsec;
            SaveStructToEEPROM(my);

        }
        printf("task1 entry\r\n");
    }
}

void task2_task(void *pvParameters) {
    initLed();
    clearDisplay();
    while(1)
    {
       // handleKeySetting();
        //     u8 val= GPIO_ReadInputDataBit(GPIOA, BUTTON1);
//        u8 val= digitalRead(BUTTON1);
//        u16 valu=10;

//        if(!val)
//        {
//            printf("\r\n TASK 2 da bam phim\r\n");
//            xQueueSend(q, &valu, portMAX_DELAY);  //
//            printf("\r\nda gui queue\r\n");
//            vTaskDelay(100);
//        }
        // displayNumber(RTCsec, 0b0000);
        uint16_t timeValue = RTChour * 100 + RTCmin;
        displayNumber(timeValue, dotBlinkState << 1);// không hiển thị dấu chấm
        scanDisplay();
    }
}


void task3_task(void *pvParameters) {
    u16 i;
   // setupTimeByButton();
    while(1)
    {
       // SettingLoop();
        // GPIO_SetBits(GPIOA, LED1);
        // PIN_toggle(PA20);
//        digitalWrite(LED1, 0);
//        vTaskDelay(100);
//        digitalWrite(LED1, 1);
//        vTaskDelay(100);
        //TickType_t tick_now = xTaskGetTickCount();
        //printf("Tick: %lu\r\n", (unsigned long)tick_now);
        // GPIO_ResetBits(GPIOA, LED1);
          vTaskDelay(pdMS_TO_TICKS(1000));// Delay 2ms (500Hz)
          RTC_Read_Time();
        if (RTCsec != prevSec) {
            dotBlinkState ^= 1;     // Đảo trạng thái dấu chấm
            prevSec = RTCsec;
        }
        // displayNumber(i++, 0b0000);
        // printf("Free RAM: %d bytes\n", get_free_ram());
    }
}

int main(void) {
    NVIC_PriorityGroupConfig(NVIC_PriorityGroup_2);
    Delay_Init();
    USART_Printf_Init(115200);
    //ADC_init();
    printf("SystemClk:%d FREERTOS VER:%s VDD:%ld\r\n", SystemCoreClock,
    tskKERNEL_VERSION_NUMBER);
    //PORTA_enable();
    pinMode(LED1, OUTPUT);
    pinMode(BUTTON1, INPUT_PULLUP);
    button_Init();

    // TIM_INT_Init(1000-1,  48000-1);
    IIC_Init(I2C_SPEED);
    e_rom_test();
    RTC_Test();
    LoadStructFromEEPROM();

    //u8 buff[64] = {0};
    //  sprintf(buff, "{\"RSP\":\"PlayAmount\",\"RESULT\":1,\"ID\":\"%s\",\"Amount\":%d}", "123456", 5555);
    //printf("RSP value: %s\r\n", buff);
    //cJSON *root = cJSON_Parse((char *)buff);
    //cJSON *rsp_obj = cJSON_GetObjectItem(root, "RSP");
//    if (rsp_obj != NULL && cJSON_IsString(rsp_obj))
//    {
//        printf("RSP value: %s\r\n", rsp_obj->valuestring);
////        if (strcmp(rsp_obj->valuestring, "SN_REQUEST") == 0)
////        {
////
////            pub_mqtt(TOPIC_SERIAL, message);
////        }
//        // Thực hiện xử lý khác nếu cần
//    }
    //cJSON_Delete(root); // giải phóng con trỏ json

    q = xQueueCreate(3, sizeof(u16));  //
    if (q == NULL) {
        printf("queeu fail\r\n");

    }
    printf("3\r\n");
    xTaskCreate((TaskFunction_t) task2_task, (const char*) "task2",
            (uint16_t) TASK2_STK_SIZE, (void*) NULL,
            (UBaseType_t) TASK2_TASK_PRIO, (TaskHandle_t*) &Task2Task_Handler);
    printf("2\r\n");
    xTaskCreate((TaskFunction_t) task1_task, (const char*) "task1",
            (uint16_t) TASK1_STK_SIZE, (void*) NULL,
            (UBaseType_t) TASK1_TASK_PRIO, (TaskHandle_t*) &Task1Task_Handler);
    xTaskCreate((TaskFunction_t) task3_task, (const char*) "task3",
            (uint16_t) TASK1_STK_SIZE, (void*) NULL,
            (UBaseType_t) TASK1_TASK_PRIO, (TaskHandle_t*) &Task3Task_Handler);
    button_Init();
   // but_Task_Init();
    vTaskStartScheduler();
//    printf("done\n");
//    while(1)
//    {
//        printf("MAIN TASK\n");
//        vTaskDelay(500);
//
//
//    }
}

