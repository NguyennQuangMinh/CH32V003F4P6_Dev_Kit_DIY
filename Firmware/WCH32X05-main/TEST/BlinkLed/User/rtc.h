/*
 * rtc.h
 *
 *  Created on: Jun 13, 2025
 *      Author: Administrator
 */

#ifndef USER_RTC_H_
#define USER_RTC_H_


/*Header file for reading and writing DS3231 registers*/

/*Memory addresses and registers to access DS3231*/

#define RTC_Address                0x68             //Slave address of ds3231

#define DS3231_Read                ((RTC_Address << 1) | 0x01)      //Read address for RTC
#define DS3231_Write               ((RTC_Address << 1) & 0xFE)      //Write address for RTC


// rtc.h
#define RTC_REG_SECOND   0x00
#define RTC_REG_MINUTE   0x01
#define RTC_REG_HOUR     0x02
#define RTC_REG_DAY      0x03
#define RTC_REG_DATE    0x04
#define RTC_REG_MONTH    0x05
#define RTC_REG_YEAR     0x06



#define control_Register            0x0E
#define Status_Register             0x0F

#define _24_hour_format             0
#define _12_hour_format             1
#define am                          0
#define pm                          1


#endif /* USER_RTC_H_ */
