/*
 * led7.c
 *
 *  Created on: Jun 15, 2025
 *      Author: Administrator
 */


#include <stdint.h>
#include <stdbool.h>
#include "gpio.h"
#include "FreeRTOS.h"
#define HIGH 1
#define LOW  0

// Giả định bạn đã định nghĩa digitalWrite(pin, value)

// Gán chân điều khiển
const uint8_t segmentPins[8] = {PB0, PB1, PB2, PB3, PB4, PB5, PB6, PB7};   // A B C D E F G DP
//const uint8_t segmentPins[8] = {PB7, PB6, PB5, PB4, PB3, PB2, PB1, PB0};   // A B C D E F G DP
const uint8_t digitPins[4]   = {PB13, PB12, PB8, PB9};           // Digit 0-3

// Mã 7 đoạn hiển thị số 0-9 (bit0 = A, bit6 = G, bit7 = DP)
const uint8_t digitCode[10] = {
  0b00111111, // 0
  0b00000110, // 1
  0b01011011, // 2
  0b01001111, // 3
  0b01100110, // 4
  0b01101101, // 5
  0b01111101, // 6
  0b00000111, // 7
  0b01111111, // 8
  0b01101111  // 9
};

uint8_t displayDigits[4] = {0};
bool dotState[4] = {false};

// Cập nhật số hiển thị (0–9999) và dấu chấm
void displayNumber(uint16_t number, uint8_t dots) {
    if (number > 9999) number = 9999;
    for (int8_t i = 3; i >= 0; i--) {
        displayDigits[i] = number % 10;
        dotState[i] = (dots >> i) & 0x01;
        number /= 10;
    }
}

// Hiển thị 1 chữ số tại vị trí digitIndex (0–3)
//void showDigit(uint8_t digitIndex, uint8_t num, u8 dot) {
//    // Tắt tất cả digits
//    for (uint8_t i = 0; i < 4; i++) {
//       // digitalWrite(digitPins[i], HIGH);
//        digitalWrite(digitPins[i], HIGH);
//    }
//
//    uint8_t seg = digitCode[num];
//    if (dot) seg |= 0x80;  // thêm DP
//
//    for (uint8_t i = 0; i < 8; i++) {
//        digitalWrite(segmentPins[i], (seg >> i) & 0x01);
//    }
//
//    // Bật digit đang chọn
// //   digitalWrite(digitPins[digitIndex], LOW);
//    digitalWrite(digitPins[digitIndex], HIGH);
//}
#define LED_ON  HIGH
#define LED_OFF LOW
void showDigit(uint8_t digitIndex, uint8_t num, u8 dot) {
    // Tắt tất cả digits
    for (uint8_t i = 0; i < 4; i++) {
        digitalWrite(digitPins[i], LED_OFF);  // Digit OFF
    }

    uint8_t seg = digitCode[num];
    if (dot) seg |= 0x80;

    // Ghi dữ liệu segment, bật là LOW vì LED dương chung
    for (uint8_t i = 0; i < 8; i++) {
        digitalWrite(segmentPins[i], (seg >> i) & 0x01 ? LED_OFF : LED_ON);  // đảo ngược
    }

    // Bật digit đang chọn
    digitalWrite(digitPins[digitIndex], LED_ON);
}

// Gọi liên tục trong main loop
void scanDisplay() {
    for (uint8_t i = 0; i < 4; i++) {
        showDigit(i, displayDigits[i], dotState[i]);
        vTaskDelay(pdMS_TO_TICKS(2)); // Delay 2ms (500Hz)
       // vTaskDelay(2);
    }
}
void initLed()
{
    for (int i = 0; i < 8; i++) pinMode(segmentPins[i], OUTPUT);
    for (int i = 0; i < 4; i++) pinMode(digitPins[i], OUTPUT);
}
void clearDisplay() {
    for (uint8_t i = 0; i < 8; i++) digitalWrite(segmentPins[i], LOW);  // hoặc HIGH tùy loại LED
    for (uint8_t i = 0; i < 4; i++) digitalWrite(digitPins[i], LOW);
}
