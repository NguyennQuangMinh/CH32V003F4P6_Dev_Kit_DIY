#include <stdbool.h>
#include "rtc.h"
#include "gpio.h"
#include "FreeRTOS.h"
#include "task.h"

#define MENU PA15
#define RETURN PA16
#define UP PA17
#define DOWN PA18

typedef enum {
    BTN_NONE = 0,
    BTN_MENU,
    BTN_RETURN,
    BTN_UP,
    BTN_DOWN
} ButtonType;

ButtonType readButtonState(void) {
    if (digitalRead(MENU) == 0)    return BTN_MENU;
    if (digitalRead(RETURN) == 0)  return BTN_RETURN;
    if (digitalRead(UP) == 0)      return BTN_UP;
    if (digitalRead(DOWN) == 0)    return BTN_DOWN;
    return BTN_NONE;
}


void ButtonTask(void *param) {
    ButtonType lastState = BTN_NONE;
    ButtonType current;

    while (1) {
        current = readButtonState();

        if (current != BTN_NONE && current != lastState) {
            // phát hiện nhấn mới
            switch (current) {
                case BTN_MENU:
                    printf("da bam MENU\r\n");
                   // handleMenuKey();
                    break;
                case BTN_RETURN:
                    printf("da bam reTURN \r\n");
                   // handleReturnKey();
                    break;
                case BTN_UP:
                    //handleUpKey();
                    printf("da bam UP \r\n");
                    break;
                case BTN_DOWN:
                   // handleDownKey();
                    printf("da bam DOWN \r\n");
                    break;
                default:
                    break;
            }
        }

        lastState = current;

        vTaskDelay(pdMS_TO_TICKS(50));  // kiểm tra mỗi 50ms
    }
}
void button_Init() {

    pinMode(MENU, INPUT_PULLUP);
    pinMode(RETURN, INPUT_PULLUP);
    pinMode(UP, INPUT_PULLUP);
    pinMode(DOWN, INPUT_PULLUP);
    TaskHandle_t but_task;
    xTaskCreate((TaskFunction_t) ButtonTask, (const char*) "task but",
            (uint16_t) 256, (void*) NULL,
            (UBaseType_t) 10, (TaskHandle_t*) &but_task);

}




