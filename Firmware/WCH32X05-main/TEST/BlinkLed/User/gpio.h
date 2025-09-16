/*
 * gpio.h
 *
 *  Created on: Jun 14, 2025
 *      Author: Administrator
 */

#ifndef USER_GPIO_H_
#define USER_GPIO_H_

#include "ch32x035.h"

enum{
  PA0,  PA1,  PA2,  PA3,  PA4,  PA5,  PA6,  PA7,  PA8,  PA9,  PA10, PA11, PA12, PA13, PA14, PA15,
  PA16, PA17, PA18, PA19, PA20, PA21, PA22, PA23, PA24, PA25, PA26, PA27, PA28, PA29, PA30, PA31,
  PB0,  PB1,  PB2,  PB3,  PB4,  PB5,  PB6,  PB7,  PB8,  PB9,  PB10, PB11, PB12, PB13, PB14, PB15,
  PB16, PB17, PB18, PB19, PB20, PB21, PB22, PB23, PB24, PB25, PB26, PB27, PB28, PB29, PB30, PB31,
  PC0,  PC1,  PC2,  PC3,  PC4,  PC5,  PC6,  PC7,  PC8,  PC9,  PC10, PC11, PC12, PC13, PC14, PC15,
  PC16, PC17, PC18, PC19, PC20, PC21, PC22, PC23
};
enum
{
   INPUT,
   INPUT_PULLUP,
   OUTPUT
};
// ===================================================================================
// Set PIN as INPUT (high impedance, no pullup/pulldown)
// ===================================================================================
#define PIN_input(PIN) \
  ((PIN>=PA0)&&(PIN<=PA7)   ? ( GPIOA->CFGLR =  (GPIOA->CFGLR                         \
                                             & ~((uint32_t)0b1111<<(((PIN)&7)<<2)))   \
                                             |  ((uint32_t)0b0100<<(((PIN)&7)<<2))) : \
  ((PIN>=PA8)&&(PIN<=PA15)  ? ( GPIOA->CFGHR =  (GPIOA->CFGHR                         \
                                             & ~((uint32_t)0b1111<<(((PIN)&7)<<2)))   \
                                             |  ((uint32_t)0b0100<<(((PIN)&7)<<2))) : \
  ((PIN>=PA16)&&(PIN<=PA23) ? ( GPIOA->CFGXR =  (GPIOA->CFGXR                         \
                                             & ~((uint32_t)0b1111<<(((PIN)&7)<<2)))   \
                                             |  ((uint32_t)0b0100<<(((PIN)&7)<<2))) : \
  ((PIN>=PB0)&&(PIN<=PB7)   ? ( GPIOB->CFGLR =  (GPIOB->CFGLR                         \
                                             & ~((uint32_t)0b1111<<(((PIN)&7)<<2)))   \
                                             |  ((uint32_t)0b0100<<(((PIN)&7)<<2))) : \
  ((PIN>=PB8)&&(PIN<=PB15)  ? ( GPIOB->CFGHR =  (GPIOB->CFGHR                         \
                                             & ~((uint32_t)0b1111<<(((PIN)&7)<<2)))   \
                                             |  ((uint32_t)0b0100<<(((PIN)&7)<<2))) : \
  ((PIN>=PB16)&&(PIN<=PB23) ? ( GPIOB->CFGXR =  (GPIOB->CFGXR                         \
                                             & ~((uint32_t)0b1111<<(((PIN)&7)<<2)))   \
                                             |  ((uint32_t)0b0100<<(((PIN)&7)<<2))) : \
  ((PIN>=PC0)&&(PIN<=PC7)   ? ( GPIOC->CFGLR =  (GPIOC->CFGLR                         \
                                             & ~((uint32_t)0b1111<<(((PIN)&7)<<2)))   \
                                             |  ((uint32_t)0b0100<<(((PIN)&7)<<2))) : \
  ((PIN>=PC8)&&(PIN<=PC15)  ? ( GPIOC->CFGHR =  (GPIOC->CFGHR                         \
                                             & ~((uint32_t)0b1111<<(((PIN)&7)<<2)))   \
                                             |  ((uint32_t)0b0100<<(((PIN)&7)<<2))) : \
  ((PIN>=PC16)&&(PIN<=PC23) ? ( GPIOC->CFGXR =  (GPIOC->CFGXR                         \
                                             & ~((uint32_t)0b1111<<(((PIN)&7)<<2)))   \
                                             |  ((uint32_t)0b0100<<(((PIN)&7)<<2))) : \
(0))))))))))
#define PIN_input_HI PIN_input
#define PIN_input_FL PIN_input

// ===================================================================================
// Set PIN as INPUT with internal PULLUP resistor
// ===================================================================================
#define PIN_input_PU(PIN) \
  ((PIN>=PA0)&&(PIN<=PA7)   ? ({GPIOA->CFGLR  =  (GPIOA->CFGLR                        \
                                              & ~((uint32_t)0b1111<<(((PIN)&7)<<2)))  \
                                              |  ((uint32_t)0b1000<<(((PIN)&7)<<2));  \
                                GPIOA->BSHR   =  ((uint32_t)1<<((PIN)&15));      }) : \
  ((PIN>=PA8)&&(PIN<=PA15)  ? ({GPIOA->CFGHR  =  (GPIOA->CFGHR                        \
                                              & ~((uint32_t)0b1111<<(((PIN)&7)<<2)))  \
                                              |  ((uint32_t)0b1000<<(((PIN)&7)<<2));  \
                                GPIOA->BSHR   =  ((uint32_t)1<<((PIN)&15));      }) : \
  ((PIN>=PA16)&&(PIN<=PA23) ? ({GPIOA->CFGXR  =  (GPIOA->CFGXR                        \
                                              & ~((uint32_t)0b1111<<(((PIN)&7)<<2)))  \
                                              |  ((uint32_t)0b1000<<(((PIN)&7)<<2));  \
                                GPIOA->BSXR   =  ((uint32_t)1<<((PIN)&15));      }) : \
  ((PIN>=PB0)&&(PIN<=PB7)   ? ({GPIOB->CFGLR  =  (GPIOB->CFGLR                        \
                                              & ~((uint32_t)0b1111<<(((PIN)&7)<<2)))  \
                                              |  ((uint32_t)0b1000<<(((PIN)&7)<<2));  \
                                GPIOB->BSHR   =  ((uint32_t)1<<((PIN)&15));      }) : \
  ((PIN>=PB8)&&(PIN<=PB15)  ? ({GPIOB->CFGHR  =  (GPIOB->CFGHR                        \
                                              & ~((uint32_t)0b1111<<(((PIN)&7)<<2)))  \
                                              |  ((uint32_t)0b1000<<(((PIN)&7)<<2));  \
                                GPIOB->BSHR   =  ((uint32_t)1<<((PIN)&15));      }) : \
  ((PIN>=PB16)&&(PIN<=PB23) ? ({GPIOB->CFGXR  =  (GPIOB->CFGXR                        \
                                              & ~((uint32_t)0b1111<<(((PIN)&7)<<2)))  \
                                              |  ((uint32_t)0b1000<<(((PIN)&7)<<2));  \
                                GPIOB->BSXR   =  ((uint32_t)1<<((PIN)&15));      }) : \
  ((PIN>=PC0)&&(PIN<=PC7)   ? ({GPIOC->CFGLR  =  (GPIOC->CFGLR                        \
                                              & ~((uint32_t)0b1111<<(((PIN)&7)<<2)))  \
                                              |  ((uint32_t)0b1000<<(((PIN)&7)<<2));  \
                                GPIOC->BSHR   =  ((uint32_t)1<<((PIN)&15));      }) : \
  ((PIN>=PC8)&&(PIN<=PC15)  ? ({GPIOC->CFGHR  =  (GPIOC->CFGHR                        \
                                              & ~((uint32_t)0b1111<<(((PIN)&7)<<2)))  \
                                              |  ((uint32_t)0b1000<<(((PIN)&7)<<2));  \
                                GPIOC->BSHR   =  ((uint32_t)1<<((PIN)&15));      }) : \
  ((PIN>=PC16)&&(PIN<=PC23) ? ({GPIOC->CFGXR  =  (GPIOC->CFGXR                        \
                                              & ~((uint32_t)0b1111<<(((PIN)&7)<<2)))  \
                                              |  ((uint32_t)0b1000<<(((PIN)&7)<<2));  \
                                GPIOC->BSXR   =  ((uint32_t)1<<((PIN)&15));      }) : \
(0))))))))))

// ===================================================================================
// Set PIN as INPUT with internal PULLDOWN resistor
// ===================================================================================
#define PIN_input_PD(PIN) \
  ((PIN>=PA0)&&(PIN<=PA7)   ? ({GPIOA->CFGLR  =  (GPIOA->CFGLR                        \
                                              & ~((uint32_t)0b1111<<(((PIN)&7)<<2)))  \
                                              |  ((uint32_t)0b1000<<(((PIN)&7)<<2));  \
                                GPIOA->BSHR   =  (((uint32_t)1<<16)<<((PIN)&15));}) : \
  ((PIN>=PA8)&&(PIN<=PA15)  ? ({GPIOA->CFGHR  =  (GPIOA->CFGHR                        \
                                              & ~((uint32_t)0b1111<<(((PIN)&7)<<2)))  \
                                              |  ((uint32_t)0b1000<<(((PIN)&7)<<2));  \
                                GPIOA->BSHR   =  (((uint32_t)1<<16)<<((PIN)&15));}) : \
  ((PIN>=PA16)&&(PIN<=PA23) ? ({GPIOA->CFGXR  =  (GPIOA->CFGXR                        \
                                              & ~((uint32_t)0b1111<<(((PIN)&7)<<2)))  \
                                              |  ((uint32_t)0b1000<<(((PIN)&7)<<2));  \
                                GPIOA->BSXR   =  (((uint32_t)1<<16)<<((PIN)&15));}) : \
  ((PIN>=PB0)&&(PIN<=PB7)   ? ({GPIOB->CFGLR  =  (GPIOB->CFGLR                        \
                                              & ~((uint32_t)0b1111<<(((PIN)&7)<<2)))  \
                                              |  ((uint32_t)0b1000<<(((PIN)&7)<<2));  \
                                GPIOB->BSHR   =  (((uint32_t)1<<16)<<((PIN)&15));}) : \
  ((PIN>=PB8)&&(PIN<=PB15)  ? ({GPIOB->CFGHR  =  (GPIOB->CFGHR                        \
                                              & ~((uint32_t)0b1111<<(((PIN)&7)<<2)))  \
                                              |  ((uint32_t)0b1000<<(((PIN)&7)<<2));  \
                                GPIOB->BSHR   =  (((uint32_t)1<<16)<<((PIN)&15));}) : \
  ((PIN>=PB16)&&(PIN<=PB23) ? ({GPIOB->CFGXR  =  (GPIOB->CFGXR                        \
                                              & ~((uint32_t)0b1111<<(((PIN)&7)<<2)))  \
                                              |  ((uint32_t)0b1000<<(((PIN)&7)<<2));  \
                                GPIOB->BSXR   =  (((uint32_t)1<<16)<<((PIN)&15));}) : \
  ((PIN>=PC0)&&(PIN<=PC7)   ? ({GPIOC->CFGLR  =  (GPIOC->CFGLR                        \
                                              & ~((uint32_t)0b1111<<(((PIN)&7)<<2)))  \
                                              |  ((uint32_t)0b1000<<(((PIN)&7)<<2));  \
                                GPIOC->BSHR   =  (((uint32_t)1<<16)<<((PIN)&15));}) : \
  ((PIN>=PC8)&&(PIN<=PC15)  ? ({GPIOC->CFGHR  =  (GPIOC->CFGHR                        \
                                              & ~((uint32_t)0b1111<<(((PIN)&7)<<2)))  \
                                              |  ((uint32_t)0b1000<<(((PIN)&7)<<2));  \
                                GPIOC->BSHR   =  (((uint32_t)1<<16)<<((PIN)&15));}) : \
  ((PIN>=PC16)&&(PIN<=PC23) ? ({GPIOC->CFGXR  =  (GPIOC->CFGXR                        \
                                              & ~((uint32_t)0b1111<<(((PIN)&7)<<2)))  \
                                              |  ((uint32_t)0b1000<<(((PIN)&7)<<2));  \
                                GPIOC->BSXR   =  (((uint32_t)1<<16)<<((PIN)&15));}) : \
(0))))))))))

// ===================================================================================
// Set PIN as INPUT for analog peripherals (e.g. ADC)
// ===================================================================================
#define PIN_input_AN(PIN) \
  ((PIN>=PA0)&&(PIN<=PA7)   ? ( GPIOA->CFGLR &= ~((uint32_t)0b1111<<(((PIN)&7)<<2)) ) : \
  ((PIN>=PA8)&&(PIN<=PA15)  ? ( GPIOA->CFGHR &= ~((uint32_t)0b1111<<(((PIN)&7)<<2)) ) : \
  ((PIN>=PA16)&&(PIN<=PA23) ? ( GPIOA->CFGXR &= ~((uint32_t)0b1111<<(((PIN)&7)<<2)) ) : \
  ((PIN>=PB0)&&(PIN<=PB7)   ? ( GPIOB->CFGLR &= ~((uint32_t)0b1111<<(((PIN)&7)<<2)) ) : \
  ((PIN>=PB8)&&(PIN<=PB15)  ? ( GPIOB->CFGHR &= ~((uint32_t)0b1111<<(((PIN)&7)<<2)) ) : \
  ((PIN>=PB16)&&(PIN<=PB23) ? ( GPIOB->CFGXR &= ~((uint32_t)0b1111<<(((PIN)&7)<<2)) ) : \
  ((PIN>=PC0)&&(PIN<=PC7)   ? ( GPIOC->CFGLR &= ~((uint32_t)0b1111<<(((PIN)&7)<<2)) ) : \
  ((PIN>=PC8)&&(PIN<=PC15)  ? ( GPIOC->CFGHR &= ~((uint32_t)0b1111<<(((PIN)&7)<<2)) ) : \
  ((PIN>=PC16)&&(PIN<=PC23) ? ( GPIOC->CFGXR &= ~((uint32_t)0b1111<<(((PIN)&7)<<2)) ) : \
(0))))))))))
#define PIN_input_AD  PIN_input_AN
#define PIN_input_ADC PIN_input_AN

// ===================================================================================
// Set PIN as OUTPUT (push-pull)
// ===================================================================================
#define PIN_output(PIN) \
  ((PIN>=PA0)&&(PIN<=PA7)   ? ( GPIOA->CFGLR =  (GPIOA->CFGLR                         \
                                             & ~((uint32_t)0b1111<<(((PIN)&7)<<2)))   \
                                             |  ((uint32_t)0b0011<<(((PIN)&7)<<2))) : \
  ((PIN>=PA8)&&(PIN<=PA15)  ? ( GPIOA->CFGHR =  (GPIOA->CFGHR                         \
                                             & ~((uint32_t)0b1111<<(((PIN)&7)<<2)))   \
                                             |  ((uint32_t)0b0011<<(((PIN)&7)<<2))) : \
  ((PIN>=PA16)&&(PIN<=PA23) ? ( GPIOA->CFGXR =  (GPIOA->CFGXR                         \
                                             & ~((uint32_t)0b1111<<(((PIN)&7)<<2)))   \
                                             |  ((uint32_t)0b0011<<(((PIN)&7)<<2))) : \
  ((PIN>=PB0)&&(PIN<=PB7)   ? ( GPIOB->CFGLR =  (GPIOB->CFGLR                         \
                                             & ~((uint32_t)0b1111<<(((PIN)&7)<<2)))   \
                                             |  ((uint32_t)0b0011<<(((PIN)&7)<<2))) : \
  ((PIN>=PB8)&&(PIN<=PB15)  ? ( GPIOB->CFGHR =  (GPIOB->CFGHR                         \
                                             & ~((uint32_t)0b1111<<(((PIN)&7)<<2)))   \
                                             |  ((uint32_t)0b0011<<(((PIN)&7)<<2))) : \
  ((PIN>=PB16)&&(PIN<=PB23) ? ( GPIOB->CFGXR =  (GPIOB->CFGXR                         \
                                             & ~((uint32_t)0b1111<<(((PIN)&7)<<2)))   \
                                             |  ((uint32_t)0b0011<<(((PIN)&7)<<2))) : \
  ((PIN>=PC0)&&(PIN<=PC7)   ? ( GPIOC->CFGLR =  (GPIOC->CFGLR                         \
                                             & ~((uint32_t)0b1111<<(((PIN)&7)<<2)))   \
                                             |  ((uint32_t)0b0011<<(((PIN)&7)<<2))) : \
  ((PIN>=PC8)&&(PIN<=PC15)  ? ( GPIOC->CFGHR =  (GPIOC->CFGHR                         \
                                             & ~((uint32_t)0b1111<<(((PIN)&7)<<2)))   \
                                             |  ((uint32_t)0b0011<<(((PIN)&7)<<2))) : \
  ((PIN>=PC16)&&(PIN<=PC23) ? ( GPIOC->CFGXR =  (GPIOC->CFGXR                         \
                                             & ~((uint32_t)0b1111<<(((PIN)&7)<<2)))   \
                                             |  ((uint32_t)0b0011<<(((PIN)&7)<<2))) : \
(0))))))))))
#define PIN_output_PP PIN_output

// ===================================================================================
// Set PIN as alternate output mode
// ===================================================================================
#define PIN_alternate(PIN) \
  ((PIN>=PA0)&&(PIN<=PA7)   ? ( GPIOA->CFGLR =  (GPIOA->CFGLR                         \
                                             & ~((uint32_t)0b1111<<(((PIN)&7)<<2)))   \
                                             |  ((uint32_t)0b1011<<(((PIN)&7)<<2))) : \
  ((PIN>=PA8)&&(PIN<=PA15)  ? ( GPIOA->CFGHR =  (GPIOA->CFGHR                         \
                                             & ~((uint32_t)0b1111<<(((PIN)&7)<<2)))   \
                                             |  ((uint32_t)0b1011<<(((PIN)&7)<<2))) : \
  ((PIN>=PA16)&&(PIN<=PA23) ? ( GPIOA->CFGXR =  (GPIOA->CFGXR                         \
                                             & ~((uint32_t)0b1111<<(((PIN)&7)<<2)))   \
                                             |  ((uint32_t)0b1011<<(((PIN)&7)<<2))) : \
  ((PIN>=PB0)&&(PIN<=PB7)   ? ( GPIOB->CFGLR =  (GPIOB->CFGLR                         \
                                             & ~((uint32_t)0b1111<<(((PIN)&7)<<2)))   \
                                             |  ((uint32_t)0b1011<<(((PIN)&7)<<2))) : \
  ((PIN>=PB8)&&(PIN<=PB15)  ? ( GPIOB->CFGHR =  (GPIOB->CFGHR                         \
                                             & ~((uint32_t)0b1111<<(((PIN)&7)<<2)))   \
                                             |  ((uint32_t)0b1011<<(((PIN)&7)<<2))) : \
  ((PIN>=PB16)&&(PIN<=PB23) ? ( GPIOB->CFGXR =  (GPIOB->CFGXR                         \
                                             & ~((uint32_t)0b1111<<(((PIN)&7)<<2)))   \
                                             |  ((uint32_t)0b1011<<(((PIN)&7)<<2))) : \
  ((PIN>=PC0)&&(PIN<=PC7)   ? ( GPIOC->CFGLR =  (GPIOC->CFGLR                         \
                                             & ~((uint32_t)0b1111<<(((PIN)&7)<<2)))   \
                                             |  ((uint32_t)0b1011<<(((PIN)&7)<<2))) : \
  ((PIN>=PC8)&&(PIN<=PC15)  ? ( GPIOC->CFGHR =  (GPIOC->CFGHR                         \
                                             & ~((uint32_t)0b1111<<(((PIN)&7)<<2)))   \
                                             |  ((uint32_t)0b1011<<(((PIN)&7)<<2))) : \
  ((PIN>=PC16)&&(PIN<=PC23) ? ( GPIOC->CFGXR =  (GPIOC->CFGXR                         \
                                             & ~((uint32_t)0b1111<<(((PIN)&7)<<2)))   \
                                             |  ((uint32_t)0b1011<<(((PIN)&7)<<2))) : \
(0))))))))))

// ===================================================================================
// Set PIN output value to LOW
// ===================================================================================
#define PIN_low(PIN) \
  ((PIN>=PA0 )&&(PIN<=PA15) ? ( GPIOA->BCR = 1<<((PIN)&15) ) : \
  ((PIN>=PB0 )&&(PIN<=PB15) ? ( GPIOB->BCR = 1<<((PIN)&15) ) : \
  ((PIN>=PC0 )&&(PIN<=PC15) ? ( GPIOC->BCR = 1<<((PIN)&15) ) : \
  ((PIN>=PA16)&&(PIN<=PA23) ? ( GPIOA->BSXR = ((1<<16)<<((PIN)&15)) ) : \
  ((PIN>=PB16)&&(PIN<=PB23) ? ( GPIOB->BSXR = ((1<<16)<<((PIN)&15)) ) : \
  ((PIN>=PC16)&&(PIN<=PC23) ? ( GPIOC->BSXR = ((1<<16)<<((PIN)&15)) ) : \
(0)))))))

// ===================================================================================
// Set PIN output value to HIGH
// ===================================================================================
#define PIN_high(PIN) \
  ((PIN>=PA0 )&&(PIN<=PA15) ? ( GPIOA->BSHR = 1<<((PIN)&15) ) : \
  ((PIN>=PA16)&&(PIN<=PA23) ? ( GPIOA->BSXR = 1<<((PIN)&15) ) : \
  ((PIN>=PB0 )&&(PIN<=PB15) ? ( GPIOB->BSHR = 1<<((PIN)&15) ) : \
  ((PIN>=PB16)&&(PIN<=PB23) ? ( GPIOB->BSXR = 1<<((PIN)&15) ) : \
  ((PIN>=PC0 )&&(PIN<=PC15) ? ( GPIOC->BSHR = 1<<((PIN)&15) ) : \
  ((PIN>=PC16)&&(PIN<=PC23) ? ( GPIOC->BSXR = 1<<((PIN)&15) ) : \
(0)))))))

// ===================================================================================
// Toggle PIN output value
// ===================================================================================
#define PIN_toggle(PIN) \
  ((PIN>=PA0)&&(PIN<=PA23) ? ( GPIOA->OUTDR ^= 1<<((PIN)&31) ) : \
  ((PIN>=PB0)&&(PIN<=PB23) ? ( GPIOB->OUTDR ^= 1<<((PIN)&31) ) : \
  ((PIN>=PC0)&&(PIN<=PC23) ? ( GPIOC->OUTDR ^= 1<<((PIN)&31) ) : \
(0))))

// ===================================================================================
// Read PIN input value (returns 0 for LOW, 1 for HIGH)
// ===================================================================================
#define PIN_read(PIN) \
  ((PIN>=PA0)&&(PIN<=PA23) ? ( (GPIOA->INDR>>((PIN)&31))&1 ) : \
  ((PIN>=PB0)&&(PIN<=PB23) ? ( (GPIOB->INDR>>((PIN)&31))&1 ) : \
  ((PIN>=PC0)&&(PIN<=PC23) ? ( (GPIOC->INDR>>((PIN)&31))&1 ) : \
(0))))

// ===================================================================================
// Write PIN output value (0 = LOW / 1 = HIGH)
// ===================================================================================
#define PIN_write(PIN, val) (val)?(PIN_high(PIN)):(PIN_low(PIN))


// ===================================================================================
// Setup PIN interrupt
// ===================================================================================
enum{PIN_INT_OFF, PIN_INT_RISING, PIN_INT_FALLING, PIN_INT_BOTH};

#define EXTICR1 EXTICR[0]
#define EXTICR2 EXTICR[1]

#define PIN_INT_set(PIN, TYPE) { \
  ((PIN>=PA0 )&&(PIN<=PA15) ? ({RCC->APB2PCENR |=  RCC_AFIOEN | RCC_IOPAEN;             \
                                AFIO->EXTICR1  &= ~((uint32_t)3<<(((PIN)&15)<<1)); }) : \
  ((PIN>=PA16)&&(PIN<=PA23) ? ({RCC->APB2PCENR |=  RCC_AFIOEN | RCC_IOPAEN;             \
                                AFIO->EXTICR2  &= ~((uint32_t)3<<(((PIN)&15)<<1)); }) : \
  ((PIN>=PB0 )&&(PIN<=PB15) ? ({RCC->APB2PCENR |=  RCC_AFIOEN | RCC_IOPBEN;             \
                                AFIO->EXTICR1   =  (AFIO->EXTICR1                       \
                                                & ~((uint32_t)3<<(((PIN)&15)<<1)))      \
                                                |  ((uint32_t)2<<(((PIN)&15)<<1)); }) : \
  ((PIN>=PB16)&&(PIN<=PB23) ? ({RCC->APB2PCENR |=  RCC_AFIOEN | RCC_IOPBEN;             \
                                AFIO->EXTICR2   =  (AFIO->EXTICR2                       \
                                                & ~((uint32_t)3<<(((PIN)&15)<<1)))      \
                                                |  ((uint32_t)2<<(((PIN)&15)<<1)); }) : \
  ((PIN>=PC0 )&&(PIN<=PC15) ? ({RCC->APB2PCENR |=  RCC_AFIOEN | RCC_IOPCEN;             \
                                AFIO->EXTICR1  |=  ((uint32_t)3<<(((PIN)&15)<<1)); }) : \
  ((PIN>=PC16)&&(PIN<=PC23) ? ({RCC->APB2PCENR |=  RCC_AFIOEN | RCC_IOPCEN;             \
                                AFIO->EXTICR2  |=  ((uint32_t)3<<(((PIN)&15)<<1)); }) : \
  (0))))))); \
  (TYPE & 3) ? (EXTI->INTENR |=   (uint32_t)1<<((PIN)&31)) : \
               (EXTI->INTENR &= ~((uint32_t)1<<((PIN)&31))); \
  (TYPE & 1) ? (EXTI->RTENR  |=   (uint32_t)1<<((PIN)&31)) : \
               (EXTI->RTENR  &= ~((uint32_t)1<<((PIN)&31))); \
  (TYPE & 2) ? (EXTI->FTENR  |=   (uint32_t)1<<((PIN)&31)) : \
               (EXTI->FTENR  &= ~((uint32_t)1<<((PIN)&31))); \
}

#define PIN_INT_enable()        {NVIC_EnableIRQ(EXTI7_0_IRQn);   \
                                 NVIC_EnableIRQ(EXTI15_8_IRQn);  \
                                 NVIC_EnableIRQ(EXTI25_16_IRQn); }
#define PIN_INT_disable()       {NVIC_DisableIRQ(EXTI7_0_IRQn);  \
                                 NVIC_DisableIRQ(EXTI15_8_IRQn); \
                                 NVIC_DisableIRQ(EXTI25_16_IRQn);}

#define PIN_INTFLAG_read(PIN)   (EXTI->INTFR & ((uint32_t)1 << ((PIN) & 31)))
#define PIN_INTFLAG_clear(PIN)  EXTI->INTFR = ((uint32_t)1 << ((PIN) & 31))

#define PIN_INT_ISR \
  void PIN_INT_IRQHandler(void)   __attribute__((interrupt)); \
  void EXTI7_0_IRQHandler(void)   __attribute__((alias("PIN_INT_IRQHandler"))); \
  void EXTI15_8_IRQHandler(void)  __attribute__((alias("PIN_INT_IRQHandler"))); \
  void EXTI25_16_IRQHandler(void) __attribute__((alias("PIN_INT_IRQHandler"))); \
  void PIN_INT_IRQHandler(void)

// ===================================================================================
// Setup PIN event
// ===================================================================================
enum{PIN_EVT_OFF, PIN_EVT_RISING, PIN_EVT_FALLING, PIN_EVT_BOTH};

#define PIN_EVT_set(PIN, TYPE) { \
  ((PIN>=PA0 )&&(PIN<=PA15) ? ({RCC->APB2PCENR |=  RCC_AFIOEN | RCC_IOPAEN;             \
                                AFIO->EXTICR1  &= ~((uint32_t)3<<(((PIN)&15)<<1)); }) : \
  ((PIN>=PA16)&&(PIN<=PA23) ? ({RCC->APB2PCENR |=  RCC_AFIOEN | RCC_IOPAEN;             \
                                AFIO->EXTICR2  &= ~((uint32_t)3<<(((PIN)&15)<<1)); }) : \
  ((PIN>=PB0 )&&(PIN<=PB15) ? ({RCC->APB2PCENR |=  RCC_AFIOEN | RCC_IOPBEN;             \
                                AFIO->EXTICR1   =  (AFIO->EXTICR1                       \
                                                & ~((uint32_t)3<<(((PIN)&15)<<1)))      \
                                                |  ((uint32_t)2<<(((PIN)&15)<<1)); }) : \
  ((PIN>=PB16)&&(PIN<=PB23) ? ({RCC->APB2PCENR |=  RCC_AFIOEN | RCC_IOPBEN;             \
                                AFIO->EXTICR2   =  (AFIO->EXTICR2                       \
                                                & ~((uint32_t)3<<(((PIN)&15)<<1)))      \
                                                |  ((uint32_t)2<<(((PIN)&15)<<1)); }) : \
  ((PIN>=PC0 )&&(PIN<=PC15) ? ({RCC->APB2PCENR |=  RCC_AFIOEN | RCC_IOPCEN;             \
                                AFIO->EXTICR1  |=  ((uint32_t)3<<(((PIN)&15)<<1)); }) : \
  ((PIN>=PC16)&&(PIN<=PC23) ? ({RCC->APB2PCENR |=  RCC_AFIOEN | RCC_IOPCEN;             \
                                AFIO->EXTICR2  |=  ((uint32_t)3<<(((PIN)&15)<<1)); }) : \
  (0))))))); \
  (TYPE & 3) ? (EXTI->EVENR |=   (uint32_t)1<<((PIN)&31)) : \
               (EXTI->EVENR &= ~((uint32_t)1<<((PIN)&31))); \
  (TYPE & 1) ? (EXTI->RTENR |=   (uint32_t)1<<((PIN)&31)) : \
               (EXTI->RTENR &= ~((uint32_t)1<<((PIN)&31))); \
  (TYPE & 2) ? (EXTI->FTENR |=   (uint32_t)1<<((PIN)&31)) : \
               (EXTI->FTENR &= ~((uint32_t)1<<((PIN)&31))); \
}

// ===================================================================================
// Enable GPIO PORTS
// ===================================================================================
#define PORTA_enable()    RCC->APB2PCENR |= RCC_IOPAEN;
#define PORTB_enable()    RCC->APB2PCENR |= RCC_IOPBEN;
#define PORTC_enable()    RCC->APB2PCENR |= RCC_IOPCEN;
#define PORTS_enable()    RCC->APB2PCENR |= RCC_IOPAEN | RCC_IOPBEN | RCC_IOPCEN

//#define PORT_enable(PIN) \
//  ((PIN>=PA0)&&(PIN<=PA15) ? ( RCC->APB2PCENR |= RCC_IOPAEN ) : \
//  ((PIN>=PB0)&&(PIN<=PB15) ? ( RCC->APB2PCENR |= RCC_IOPBEN ) : \
//  ((PIN>=PC0)&&(PIN<=PC15) ? ( RCC->APB2PCENR |= RCC_IOPCEN ) : \
//(0))))


#define PORT_enable(pin)                  \
    do {                                  \
        if ((pin) < 32)                   \
            RCC->APB2PCENR |= RCC_IOPAEN; \
        else if ((pin) < 64)              \
            RCC->APB2PCENR |= RCC_IOPBEN; \
        else if ((pin) < 96)              \
            RCC->APB2PCENR |= RCC_IOPCEN; \
    } while(0)
// ===================================================================================
// Disable GPIO PORTS
// ===================================================================================
#define PORTA_disable()   RCC->APB2PCENR &= ~RCC_IOPAEN
#define PORTB_disable()   RCC->APB2PCENR &= ~RCC_IOPBEN
#define PORTC_disable()   RCC->APB2PCENR &= ~RCC_IOPCEN
#define PORTS_disable()   RCC->APB2PCENR &= ~(RCC_IOPAEN | RCC_IOPBEN | RCC_IOPCEN)

#define PORT_disable(PIN) \
  ((PIN>=PA0)&&(PIN<=PA15) ? ( RCC->APB2PCENR &= ~RCC_IOPAEN ) : \
  ((PIN>=PB0)&&(PIN<=PB15) ? ( RCC->APB2PCENR &= ~RCC_IOPBEN ) : \
  ((PIN>=PC0)&&(PIN<=PC15) ? ( RCC->APB2PCENR &= ~RCC_IOPCEN ) : \
(0))))

// ===================================================================================
// Analog-to-Digital Converter (ADC) Functions
// ===================================================================================
#define ADC_enable()        ADC1->CTLR2  |=  ADC_ADON
#define ADC_disable()       ADC1->CTLR2  &= ~ADC_ADON

#define ADC_fast()          { ADC1->CTLR3   = 0b00000000000000000000000000000101; \
                              ADC1->SAMPTR1 = 0b00000000000000000000000000000000; \
                              ADC1->SAMPTR2 = 0b00000000000000000000000000000000; }
#define ADC_slow()          { ADC1->CTLR3   = 0b00000000000000000000000000001011; \
                              ADC1->SAMPTR1 = 0b00111111111111111111111111111111; \
                              ADC1->SAMPTR2 = 0b00111111111111111111111111111111; }
#define ADC_medium()        { ADC1->CTLR3   = 0b00000000000000000000000000001000; \
                              ADC1->SAMPTR1 = 0b00011011011011011011011011011011; \
                              ADC1->SAMPTR2 = 0b00011011011011011011011011011011; }

#define ADC_input_VREF()    ADC1->RSQR3 = 15

#define ADC_input(PIN) \
  ((PIN>=PA0)&&(PIN<=PA7) ? (ADC1->RSQR3 = (PIN)&7)       : \
  ((PIN>=PB0)&&(PIN<=PB1) ? (ADC1->RSQR3 = ((PIN)&7)+8)   : \
  ((PIN>=PC0)&&(PIN<=PC3) ? (ADC1->RSQR3 = ((PIN)&7)+10)  : \
(0))))

static inline void ADC_init(void) {
  RCC->APB2PCENR |= RCC_ADC1EN | RCC_AFIOEN;    // enable ADC and AFIO
  ADC_slow();                                   // set slow speed as default
  ADC1->CTLR2  = ADC_ADON                       // turn on ADC
               | ADC_EXTSEL;                    // software triggering
}

static inline uint16_t ADC_read(void) {
  ADC_enable();                                 // make sure ADC is enabled
  ADC1->CTLR2 |= ADC_SWSTART;                   // start conversion
  while(!(ADC1->STATR & ADC_EOC));              // wait until finished
  return ADC1->RDATAR;                          // return result
}

static inline uint16_t ADC_read_VDD(void) {
  ADC_input_VREF();                             // set VREF as ADC input
  return((uint32_t)1200 * 4095 / ADC_read());   // return VDD in mV
}


#endif /* USER_GPIO_H_ */
