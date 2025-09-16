/*
 * rtc.c
 *
 *  Created on: Jun 13, 2025
 *      Author: Administrator
 */
#include "debug.h"
#include "rtc.h"
#include "user.h"

u8 Convert_BCD_DECIMAL(u8 val) {
    return ((val & 0x0F) + (((val & 0xF0) >> 4) * 10));
}

u8 Convert_DECIMAL_BCD(u8 val) {
    return (((val / 10) << 4) & 0xF0) | ((val % 10) & 0x0F);
}

void RTC_Write(u16 WriteAddr, u8 DataToWrite) {
    while( I2C_GetFlagStatus( I2C1, I2C_FLAG_BUSY ) != RESET );
    I2C_GenerateSTART( I2C1, ENABLE);

    while( !I2C_CheckEvent( I2C1, I2C_EVENT_MASTER_MODE_SELECT ) );
    I2C_Send7bitAddress( I2C1, DS3231_Write, I2C_Direction_Transmitter);

    while( !I2C_CheckEvent( I2C1, I2C_EVENT_MASTER_TRANSMITTER_MODE_SELECTED ) );

    I2C_SendData( I2C1, (u8) (WriteAddr & 0x00FF));
    while( !I2C_CheckEvent( I2C1, I2C_EVENT_MASTER_BYTE_TRANSMITTED ) );

    if (I2C_GetFlagStatus( I2C1, I2C_FLAG_TXE) != RESET) {
        I2C_SendData( I2C1, DataToWrite);
    }

    while( !I2C_CheckEvent( I2C1, I2C_EVENT_MASTER_BYTE_TRANSMITTED ) );
    I2C_GenerateSTOP( I2C1, ENABLE);
}

u8 RTC_Read(u16 ReadAddr) {
    u8 temp = 0;

    while( I2C_GetFlagStatus( I2C1, I2C_FLAG_BUSY ) != RESET );
    I2C_GenerateSTART( I2C1, ENABLE);

    while( !I2C_CheckEvent( I2C1, I2C_EVENT_MASTER_MODE_SELECT ) );
    I2C_Send7bitAddress( I2C1, DS3231_Write, I2C_Direction_Transmitter);

    while( !I2C_CheckEvent( I2C1, I2C_EVENT_MASTER_TRANSMITTER_MODE_SELECTED ) );

    I2C_SendData( I2C1, (u8) (ReadAddr & 0x00FF));
    while( !I2C_CheckEvent( I2C1, I2C_EVENT_MASTER_BYTE_TRANSMITTED ) );

    I2C_GenerateSTART( I2C1, ENABLE);

    while( !I2C_CheckEvent( I2C1, I2C_EVENT_MASTER_MODE_SELECT ) );
    I2C_Send7bitAddress( I2C1, DS3231_Read, I2C_Direction_Receiver);

    while( !I2C_CheckEvent( I2C1, I2C_EVENT_MASTER_RECEIVER_MODE_SELECTED ) );
    while( I2C_GetFlagStatus( I2C1, I2C_FLAG_RXNE ) == RESET )
    I2C_AcknowledgeConfig( I2C1, DISABLE );

    temp = I2C_ReceiveData( I2C1);
    I2C_GenerateSTOP( I2C1, ENABLE);

    return temp;
}

void RTC_Init() {

    RTC_Write(control_Register, 0x00);
    RTC_Write(Status_Register, 0x08);

}

void RTC_Read_Time(void) {
    u8 temp;

    // Đọc giây
    RTCsec = RTC_Read(RTC_REG_SECOND);
    RTCsec = Convert_BCD_DECIMAL(RTCsec);

    // Đọc phút
    RTCmin = RTC_Read(RTC_REG_MINUTE);
    RTCmin = Convert_BCD_DECIMAL(RTCmin);

    // Đọc giờ
    temp = RTC_Read(RTC_REG_HOUR);
    if (temp & 0x40) {
        // 12h mode
        u8 is_pm = (temp & 0x20) ? 1 : 0;
        RTChour = Convert_BCD_DECIMAL(temp & 0x1F);
        if (is_pm && RTChour < 12)
            RTChour += 12;  // Chuyển sang PM
        else if (!is_pm && RTChour == 12)
            RTChour = 0;    // 12AM là 0h
    } else {
        // 24h mode
        RTChour = Convert_BCD_DECIMAL(temp & 0x3F);  // Dùng 6 bit thấp
    }

    printf("gio:%d phut:%d giay:%d \r\n", RTChour, RTCmin, RTCsec);
}


void RTC_Read_Date(void) {
    RTCyear = RTC_Read(RTC_REG_YEAR);
    RTCyear = Convert_BCD_DECIMAL(RTCyear);
    RTCmonth = (0x1F & RTC_Read(RTC_REG_MONTH));
    RTCmonth = Convert_BCD_DECIMAL(RTCmonth);
    RTCdate = (0x3F & RTC_Read(RTC_REG_DATE));
    RTCdate = Convert_BCD_DECIMAL(RTCdate);
    RTCday = (0x07 & RTC_Read(RTC_REG_DAY));
    RTCday = Convert_BCD_DECIMAL(RTCday);

    printf("thu:%d ngay:%d thang:%d nam:%d \r\n", RTCday, RTCdate, RTCmonth,
            RTCyear);
}

void RTC_SetTime(u8 sethour, u8 setminute, u8 setsecond, short am_pm,
        short hour_twelve_twentyfour) {

    printf("set hour raw = 0x%02X\n", Convert_DECIMAL_BCD(sethour));
    u8 temp = 0;
    RTC_Write(RTC_REG_SECOND, Convert_DECIMAL_BCD(setsecond));
    RTC_Write(RTC_REG_MINUTE, Convert_DECIMAL_BCD(setminute));
    switch (hour_twelve_twentyfour) {
    case 1: {
        switch (am_pm) {
        case 1: {
            temp = 0x60;
            break;
        }
        default: {
            temp = 0x40;
            break;
        }
        }
        RTC_Write(RTC_REG_HOUR, ((temp | (0x1F & (Convert_DECIMAL_BCD(sethour))))));
        break;
    }

    default: {
        RTC_Write(RTC_REG_HOUR, (0x3F & (Convert_DECIMAL_BCD(sethour))));
        break;
    }
    }
}



void RTC_SetDate(u8 setday, u8 setdate,
        u8 setmonth, u8 setyear)
{
    RTC_Write(RTC_REG_DAY, (Convert_DECIMAL_BCD(setday)));
    RTC_Write(RTC_REG_DATE, (Convert_DECIMAL_BCD(setdate)));
    RTC_Write(RTC_REG_MONTH, (Convert_DECIMAL_BCD(setmonth)));
    RTC_Write(RTC_REG_YEAR, (Convert_DECIMAL_BCD(setyear)));
}

float RTC_Read_Temp()
{

    u8 t1=RTC_Read(0x11);
    u8 t2=RTC_Read(0x12);
    float temp = (float)t1 + ( (t2 >> 6) * 0.25 );
    return temp;



}
void RTC_Test() {
    RTC_Init();
    //RTC_SetTime(9,43,50,1,0); //am_pm,hour_twelve_twentyfour
    //RTC_SetDate(7,14,6,25);
    //RTC_SetTime(10,58,50,0,0);   // 13:45:30 theo định dạng 24 giờ
   // u8 h = RTC_Read(hour);
    //printf("read hour reg = 0x%02X\n", h);
    RTC_Read_Time();
    RTC_Read_Date();
    printf("nhiet do:%d.%d\r\n",RTC_Read(0x11),RTC_Read(0x12));


}

