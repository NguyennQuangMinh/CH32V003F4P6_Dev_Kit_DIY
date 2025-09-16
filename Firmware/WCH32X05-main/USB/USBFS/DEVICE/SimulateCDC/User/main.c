/********************************** (C) COPYRIGHT *******************************
 * File Name          : main.c
 * Author             : WCH
 * Version            : V1.0.0
 * Date               : 2023/04/06
 * Description        : Main program body.
 *********************************************************************************
 * Copyright (c) 2021 Nanjing Qinheng Microelectronics Co., Ltd.
 * Attention: This software (modified or not) and binary are used for 
 * microcontroller manufactured by Nanjing Qinheng Microelectronics.
 *******************************************************************************/

/*
 *@Note
 *Example routine to emulate a simulate USB-CDC Device, USE USART2(PA2/PA3);
 *Please note: This code uses the default serial port 1 for debugging,
 *if you need to modify the debugging serial port, please do not use USART2
*/

#include <ch32x035_usbfs_device.h>
#include "debug.h"


/*********************************************************************
 * @fn      main
 *
 * @brief   Main program.
 *
 * @return  none
 */

void usb_print(const char *str)
{
    uint16_t len = strlen(str);
    uint16_t offset = 0;

    while (len > 0)
    {
        // Chờ nếu đang gửi dữ liệu khác
        while (Uart.USB_Up_IngFlag)
        {
            if (Uart.USB_Up_TimeOut >= DEF_UARTx_USB_UP_TIMEOUT)
            {
                Uart.USB_Up_IngFlag = 0;
                USBFS_Endp_Busy[DEF_UEP3] = 0;
                break;
            }
        }

        uint16_t packlen = (len > DEF_USBD_FS_PACK_SIZE) ? DEF_USBD_FS_PACK_SIZE : len;

        NVIC_DisableIRQ(USBFS_IRQn);
        Uart.USB_Up_IngFlag = 1;
        Uart.USB_Up_TimeOut = 0;
        USBFS_Endp_DataUp(DEF_UEP3, (uint8_t *)(str + offset), packlen, DEF_UEP_CPY_LOAD);
        NVIC_EnableIRQ(USBFS_IRQn);

        offset += packlen;
        len -= packlen;

        if (packlen == DEF_USBD_FS_PACK_SIZE)
        {
            // Yêu cầu gói 0-byte nếu đúng kích thước tối đa
            Uart.USB_Up_Pack0_Flag = 1;
        }
    }
}

void usb_printf(const char *fmt, ...)
{
    char temp[128];
    va_list args;
    va_start(args, fmt);
    vsnprintf(temp, sizeof(temp), fmt, args);
    va_end(args);
    usb_print(temp);
}


int main(void)
{

    NVIC_PriorityGroupConfig(NVIC_PriorityGroup_2);
    SystemCoreClockUpdate();
    Delay_Init();
    USART_Printf_Init(115200);
    printf("SystemClk:%d\r\n", SystemCoreClock);
    printf("ChipID:%08x\r\n", DBGMCU_GetCHIPID() );
    RCC_Configuration( );

    /* Tim3 init */
    TIM3_Init( );

    /* Usart1 init */
    UART2_Init( 1, DEF_UARTx_BAUDRATE, DEF_UARTx_STOPBIT, DEF_UARTx_PARITY );

    /* Usb Init */
    USBFS_RCC_Init( );
    USBFS_Device_Init( ENABLE );
    Delay_Ms(3000);
    usb_print("xom chapppppppppppppppp\r\n");
    //usb_printf("%s","hello world");

    while(1)
    {
        UART2_DataRx_Deal( );
        UART2_DataTx_Deal( );
    }
}
