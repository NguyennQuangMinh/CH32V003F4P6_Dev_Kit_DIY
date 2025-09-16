################################################################################
# MRS Version: 1.9.2
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
D:/WCH-MCU/CH32X35C8/EVT/EXAM/SRC/Peripheral/src/ch32x035_adc.c \
D:/WCH-MCU/CH32X35C8/EVT/EXAM/SRC/Peripheral/src/ch32x035_awu.c \
D:/WCH-MCU/CH32X35C8/EVT/EXAM/SRC/Peripheral/src/ch32x035_dbgmcu.c \
D:/WCH-MCU/CH32X35C8/EVT/EXAM/SRC/Peripheral/src/ch32x035_dma.c \
D:/WCH-MCU/CH32X35C8/EVT/EXAM/SRC/Peripheral/src/ch32x035_exti.c \
D:/WCH-MCU/CH32X35C8/EVT/EXAM/SRC/Peripheral/src/ch32x035_flash.c \
D:/WCH-MCU/CH32X35C8/EVT/EXAM/SRC/Peripheral/src/ch32x035_gpio.c \
D:/WCH-MCU/CH32X35C8/EVT/EXAM/SRC/Peripheral/src/ch32x035_i2c.c \
D:/WCH-MCU/CH32X35C8/EVT/EXAM/SRC/Peripheral/src/ch32x035_iwdg.c \
D:/WCH-MCU/CH32X35C8/EVT/EXAM/SRC/Peripheral/src/ch32x035_misc.c \
D:/WCH-MCU/CH32X35C8/EVT/EXAM/SRC/Peripheral/src/ch32x035_opa.c \
D:/WCH-MCU/CH32X35C8/EVT/EXAM/SRC/Peripheral/src/ch32x035_pwr.c \
D:/WCH-MCU/CH32X35C8/EVT/EXAM/SRC/Peripheral/src/ch32x035_rcc.c \
D:/WCH-MCU/CH32X35C8/EVT/EXAM/SRC/Peripheral/src/ch32x035_spi.c \
D:/WCH-MCU/CH32X35C8/EVT/EXAM/SRC/Peripheral/src/ch32x035_tim.c \
D:/WCH-MCU/CH32X35C8/EVT/EXAM/SRC/Peripheral/src/ch32x035_usart.c \
D:/WCH-MCU/CH32X35C8/EVT/EXAM/SRC/Peripheral/src/ch32x035_wwdg.c 

OBJS += \
./Peripheral/src/ch32x035_adc.o \
./Peripheral/src/ch32x035_awu.o \
./Peripheral/src/ch32x035_dbgmcu.o \
./Peripheral/src/ch32x035_dma.o \
./Peripheral/src/ch32x035_exti.o \
./Peripheral/src/ch32x035_flash.o \
./Peripheral/src/ch32x035_gpio.o \
./Peripheral/src/ch32x035_i2c.o \
./Peripheral/src/ch32x035_iwdg.o \
./Peripheral/src/ch32x035_misc.o \
./Peripheral/src/ch32x035_opa.o \
./Peripheral/src/ch32x035_pwr.o \
./Peripheral/src/ch32x035_rcc.o \
./Peripheral/src/ch32x035_spi.o \
./Peripheral/src/ch32x035_tim.o \
./Peripheral/src/ch32x035_usart.o \
./Peripheral/src/ch32x035_wwdg.o 

C_DEPS += \
./Peripheral/src/ch32x035_adc.d \
./Peripheral/src/ch32x035_awu.d \
./Peripheral/src/ch32x035_dbgmcu.d \
./Peripheral/src/ch32x035_dma.d \
./Peripheral/src/ch32x035_exti.d \
./Peripheral/src/ch32x035_flash.d \
./Peripheral/src/ch32x035_gpio.d \
./Peripheral/src/ch32x035_i2c.d \
./Peripheral/src/ch32x035_iwdg.d \
./Peripheral/src/ch32x035_misc.d \
./Peripheral/src/ch32x035_opa.d \
./Peripheral/src/ch32x035_pwr.d \
./Peripheral/src/ch32x035_rcc.d \
./Peripheral/src/ch32x035_spi.d \
./Peripheral/src/ch32x035_tim.d \
./Peripheral/src/ch32x035_usart.d \
./Peripheral/src/ch32x035_wwdg.d 


# Each subdirectory must supply rules for building sources it contributes
Peripheral/src/ch32x035_adc.o: D:/WCH-MCU/CH32X35C8/EVT/EXAM/SRC/Peripheral/src/ch32x035_adc.c
	@	@	riscv-none-embed-gcc -march=rv32imacxw -mabi=ilp32 -msmall-data-limit=8 -msave-restore -Os -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -fno-common -Wunused -Wuninitialized  -g -I"D:\WCH-MCU\CH32X35C8\EVT\EXAM\SRC\Debug" -I"D:\WCH-MCU\CH32X35C8\EVT\EXAM\SRC\Core" -I"D:\WCH-MCU\CH32X35C8\EVT\EXAM\IAP\USB_UART\CH32X035_IAP\User" -I"D:\WCH-MCU\CH32X35C8\EVT\EXAM\SRC\Peripheral\inc" -std=gnu99 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@	@
Peripheral/src/ch32x035_awu.o: D:/WCH-MCU/CH32X35C8/EVT/EXAM/SRC/Peripheral/src/ch32x035_awu.c
	@	@	riscv-none-embed-gcc -march=rv32imacxw -mabi=ilp32 -msmall-data-limit=8 -msave-restore -Os -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -fno-common -Wunused -Wuninitialized  -g -I"D:\WCH-MCU\CH32X35C8\EVT\EXAM\SRC\Debug" -I"D:\WCH-MCU\CH32X35C8\EVT\EXAM\SRC\Core" -I"D:\WCH-MCU\CH32X35C8\EVT\EXAM\IAP\USB_UART\CH32X035_IAP\User" -I"D:\WCH-MCU\CH32X35C8\EVT\EXAM\SRC\Peripheral\inc" -std=gnu99 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@	@
Peripheral/src/ch32x035_dbgmcu.o: D:/WCH-MCU/CH32X35C8/EVT/EXAM/SRC/Peripheral/src/ch32x035_dbgmcu.c
	@	@	riscv-none-embed-gcc -march=rv32imacxw -mabi=ilp32 -msmall-data-limit=8 -msave-restore -Os -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -fno-common -Wunused -Wuninitialized  -g -I"D:\WCH-MCU\CH32X35C8\EVT\EXAM\SRC\Debug" -I"D:\WCH-MCU\CH32X35C8\EVT\EXAM\SRC\Core" -I"D:\WCH-MCU\CH32X35C8\EVT\EXAM\IAP\USB_UART\CH32X035_IAP\User" -I"D:\WCH-MCU\CH32X35C8\EVT\EXAM\SRC\Peripheral\inc" -std=gnu99 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@	@
Peripheral/src/ch32x035_dma.o: D:/WCH-MCU/CH32X35C8/EVT/EXAM/SRC/Peripheral/src/ch32x035_dma.c
	@	@	riscv-none-embed-gcc -march=rv32imacxw -mabi=ilp32 -msmall-data-limit=8 -msave-restore -Os -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -fno-common -Wunused -Wuninitialized  -g -I"D:\WCH-MCU\CH32X35C8\EVT\EXAM\SRC\Debug" -I"D:\WCH-MCU\CH32X35C8\EVT\EXAM\SRC\Core" -I"D:\WCH-MCU\CH32X35C8\EVT\EXAM\IAP\USB_UART\CH32X035_IAP\User" -I"D:\WCH-MCU\CH32X35C8\EVT\EXAM\SRC\Peripheral\inc" -std=gnu99 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@	@
Peripheral/src/ch32x035_exti.o: D:/WCH-MCU/CH32X35C8/EVT/EXAM/SRC/Peripheral/src/ch32x035_exti.c
	@	@	riscv-none-embed-gcc -march=rv32imacxw -mabi=ilp32 -msmall-data-limit=8 -msave-restore -Os -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -fno-common -Wunused -Wuninitialized  -g -I"D:\WCH-MCU\CH32X35C8\EVT\EXAM\SRC\Debug" -I"D:\WCH-MCU\CH32X35C8\EVT\EXAM\SRC\Core" -I"D:\WCH-MCU\CH32X35C8\EVT\EXAM\IAP\USB_UART\CH32X035_IAP\User" -I"D:\WCH-MCU\CH32X35C8\EVT\EXAM\SRC\Peripheral\inc" -std=gnu99 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@	@
Peripheral/src/ch32x035_flash.o: D:/WCH-MCU/CH32X35C8/EVT/EXAM/SRC/Peripheral/src/ch32x035_flash.c
	@	@	riscv-none-embed-gcc -march=rv32imacxw -mabi=ilp32 -msmall-data-limit=8 -msave-restore -Os -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -fno-common -Wunused -Wuninitialized  -g -I"D:\WCH-MCU\CH32X35C8\EVT\EXAM\SRC\Debug" -I"D:\WCH-MCU\CH32X35C8\EVT\EXAM\SRC\Core" -I"D:\WCH-MCU\CH32X35C8\EVT\EXAM\IAP\USB_UART\CH32X035_IAP\User" -I"D:\WCH-MCU\CH32X35C8\EVT\EXAM\SRC\Peripheral\inc" -std=gnu99 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@	@
Peripheral/src/ch32x035_gpio.o: D:/WCH-MCU/CH32X35C8/EVT/EXAM/SRC/Peripheral/src/ch32x035_gpio.c
	@	@	riscv-none-embed-gcc -march=rv32imacxw -mabi=ilp32 -msmall-data-limit=8 -msave-restore -Os -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -fno-common -Wunused -Wuninitialized  -g -I"D:\WCH-MCU\CH32X35C8\EVT\EXAM\SRC\Debug" -I"D:\WCH-MCU\CH32X35C8\EVT\EXAM\SRC\Core" -I"D:\WCH-MCU\CH32X35C8\EVT\EXAM\IAP\USB_UART\CH32X035_IAP\User" -I"D:\WCH-MCU\CH32X35C8\EVT\EXAM\SRC\Peripheral\inc" -std=gnu99 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@	@
Peripheral/src/ch32x035_i2c.o: D:/WCH-MCU/CH32X35C8/EVT/EXAM/SRC/Peripheral/src/ch32x035_i2c.c
	@	@	riscv-none-embed-gcc -march=rv32imacxw -mabi=ilp32 -msmall-data-limit=8 -msave-restore -Os -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -fno-common -Wunused -Wuninitialized  -g -I"D:\WCH-MCU\CH32X35C8\EVT\EXAM\SRC\Debug" -I"D:\WCH-MCU\CH32X35C8\EVT\EXAM\SRC\Core" -I"D:\WCH-MCU\CH32X35C8\EVT\EXAM\IAP\USB_UART\CH32X035_IAP\User" -I"D:\WCH-MCU\CH32X35C8\EVT\EXAM\SRC\Peripheral\inc" -std=gnu99 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@	@
Peripheral/src/ch32x035_iwdg.o: D:/WCH-MCU/CH32X35C8/EVT/EXAM/SRC/Peripheral/src/ch32x035_iwdg.c
	@	@	riscv-none-embed-gcc -march=rv32imacxw -mabi=ilp32 -msmall-data-limit=8 -msave-restore -Os -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -fno-common -Wunused -Wuninitialized  -g -I"D:\WCH-MCU\CH32X35C8\EVT\EXAM\SRC\Debug" -I"D:\WCH-MCU\CH32X35C8\EVT\EXAM\SRC\Core" -I"D:\WCH-MCU\CH32X35C8\EVT\EXAM\IAP\USB_UART\CH32X035_IAP\User" -I"D:\WCH-MCU\CH32X35C8\EVT\EXAM\SRC\Peripheral\inc" -std=gnu99 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@	@
Peripheral/src/ch32x035_misc.o: D:/WCH-MCU/CH32X35C8/EVT/EXAM/SRC/Peripheral/src/ch32x035_misc.c
	@	@	riscv-none-embed-gcc -march=rv32imacxw -mabi=ilp32 -msmall-data-limit=8 -msave-restore -Os -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -fno-common -Wunused -Wuninitialized  -g -I"D:\WCH-MCU\CH32X35C8\EVT\EXAM\SRC\Debug" -I"D:\WCH-MCU\CH32X35C8\EVT\EXAM\SRC\Core" -I"D:\WCH-MCU\CH32X35C8\EVT\EXAM\IAP\USB_UART\CH32X035_IAP\User" -I"D:\WCH-MCU\CH32X35C8\EVT\EXAM\SRC\Peripheral\inc" -std=gnu99 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@	@
Peripheral/src/ch32x035_opa.o: D:/WCH-MCU/CH32X35C8/EVT/EXAM/SRC/Peripheral/src/ch32x035_opa.c
	@	@	riscv-none-embed-gcc -march=rv32imacxw -mabi=ilp32 -msmall-data-limit=8 -msave-restore -Os -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -fno-common -Wunused -Wuninitialized  -g -I"D:\WCH-MCU\CH32X35C8\EVT\EXAM\SRC\Debug" -I"D:\WCH-MCU\CH32X35C8\EVT\EXAM\SRC\Core" -I"D:\WCH-MCU\CH32X35C8\EVT\EXAM\IAP\USB_UART\CH32X035_IAP\User" -I"D:\WCH-MCU\CH32X35C8\EVT\EXAM\SRC\Peripheral\inc" -std=gnu99 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@	@
Peripheral/src/ch32x035_pwr.o: D:/WCH-MCU/CH32X35C8/EVT/EXAM/SRC/Peripheral/src/ch32x035_pwr.c
	@	@	riscv-none-embed-gcc -march=rv32imacxw -mabi=ilp32 -msmall-data-limit=8 -msave-restore -Os -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -fno-common -Wunused -Wuninitialized  -g -I"D:\WCH-MCU\CH32X35C8\EVT\EXAM\SRC\Debug" -I"D:\WCH-MCU\CH32X35C8\EVT\EXAM\SRC\Core" -I"D:\WCH-MCU\CH32X35C8\EVT\EXAM\IAP\USB_UART\CH32X035_IAP\User" -I"D:\WCH-MCU\CH32X35C8\EVT\EXAM\SRC\Peripheral\inc" -std=gnu99 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@	@
Peripheral/src/ch32x035_rcc.o: D:/WCH-MCU/CH32X35C8/EVT/EXAM/SRC/Peripheral/src/ch32x035_rcc.c
	@	@	riscv-none-embed-gcc -march=rv32imacxw -mabi=ilp32 -msmall-data-limit=8 -msave-restore -Os -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -fno-common -Wunused -Wuninitialized  -g -I"D:\WCH-MCU\CH32X35C8\EVT\EXAM\SRC\Debug" -I"D:\WCH-MCU\CH32X35C8\EVT\EXAM\SRC\Core" -I"D:\WCH-MCU\CH32X35C8\EVT\EXAM\IAP\USB_UART\CH32X035_IAP\User" -I"D:\WCH-MCU\CH32X35C8\EVT\EXAM\SRC\Peripheral\inc" -std=gnu99 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@	@
Peripheral/src/ch32x035_spi.o: D:/WCH-MCU/CH32X35C8/EVT/EXAM/SRC/Peripheral/src/ch32x035_spi.c
	@	@	riscv-none-embed-gcc -march=rv32imacxw -mabi=ilp32 -msmall-data-limit=8 -msave-restore -Os -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -fno-common -Wunused -Wuninitialized  -g -I"D:\WCH-MCU\CH32X35C8\EVT\EXAM\SRC\Debug" -I"D:\WCH-MCU\CH32X35C8\EVT\EXAM\SRC\Core" -I"D:\WCH-MCU\CH32X35C8\EVT\EXAM\IAP\USB_UART\CH32X035_IAP\User" -I"D:\WCH-MCU\CH32X35C8\EVT\EXAM\SRC\Peripheral\inc" -std=gnu99 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@	@
Peripheral/src/ch32x035_tim.o: D:/WCH-MCU/CH32X35C8/EVT/EXAM/SRC/Peripheral/src/ch32x035_tim.c
	@	@	riscv-none-embed-gcc -march=rv32imacxw -mabi=ilp32 -msmall-data-limit=8 -msave-restore -Os -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -fno-common -Wunused -Wuninitialized  -g -I"D:\WCH-MCU\CH32X35C8\EVT\EXAM\SRC\Debug" -I"D:\WCH-MCU\CH32X35C8\EVT\EXAM\SRC\Core" -I"D:\WCH-MCU\CH32X35C8\EVT\EXAM\IAP\USB_UART\CH32X035_IAP\User" -I"D:\WCH-MCU\CH32X35C8\EVT\EXAM\SRC\Peripheral\inc" -std=gnu99 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@	@
Peripheral/src/ch32x035_usart.o: D:/WCH-MCU/CH32X35C8/EVT/EXAM/SRC/Peripheral/src/ch32x035_usart.c
	@	@	riscv-none-embed-gcc -march=rv32imacxw -mabi=ilp32 -msmall-data-limit=8 -msave-restore -Os -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -fno-common -Wunused -Wuninitialized  -g -I"D:\WCH-MCU\CH32X35C8\EVT\EXAM\SRC\Debug" -I"D:\WCH-MCU\CH32X35C8\EVT\EXAM\SRC\Core" -I"D:\WCH-MCU\CH32X35C8\EVT\EXAM\IAP\USB_UART\CH32X035_IAP\User" -I"D:\WCH-MCU\CH32X35C8\EVT\EXAM\SRC\Peripheral\inc" -std=gnu99 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@	@
Peripheral/src/ch32x035_wwdg.o: D:/WCH-MCU/CH32X35C8/EVT/EXAM/SRC/Peripheral/src/ch32x035_wwdg.c
	@	@	riscv-none-embed-gcc -march=rv32imacxw -mabi=ilp32 -msmall-data-limit=8 -msave-restore -Os -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -fno-common -Wunused -Wuninitialized  -g -I"D:\WCH-MCU\CH32X35C8\EVT\EXAM\SRC\Debug" -I"D:\WCH-MCU\CH32X35C8\EVT\EXAM\SRC\Core" -I"D:\WCH-MCU\CH32X35C8\EVT\EXAM\IAP\USB_UART\CH32X035_IAP\User" -I"D:\WCH-MCU\CH32X35C8\EVT\EXAM\SRC\Peripheral\inc" -std=gnu99 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@	@

