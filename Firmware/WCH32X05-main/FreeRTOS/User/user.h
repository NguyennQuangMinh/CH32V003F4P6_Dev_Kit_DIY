/*
 * user.h
 *
 *  Created on: 13 Jun 2025
 *      Author: Thang
 */

#ifndef USER_USER_H_
#define USER_USER_H_
#include "gpio.h"
#define BUTTON1 PA19
#define LED1 PA20
#define  I2C_SPEED 100000
typedef struct {
  u8 id;
  u16 value;
  u8 temperature;
  u8 h,m,s;
} __attribute__((packed)) User_Config;
extern u8 RTCmonth, RTCyear, RTCday, RTCdate;
extern u8 RTCsec;
extern u8 RTChour;
extern u8 RTCmin;
extern volatile uint8_t interruptFlag;
extern volatile uint64_t millis;
#endif /* USER_USER_H_ */
