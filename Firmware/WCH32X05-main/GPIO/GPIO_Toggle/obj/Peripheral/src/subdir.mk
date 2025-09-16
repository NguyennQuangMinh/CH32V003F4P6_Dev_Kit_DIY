################################################################################
# MRS Version: 1.9.2
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
C:/cty\ IoT\ solution/CH32V003F4P6_Dev_Kit_DIY/Firmware/WCH32X05-main/SRC/Peripheral/src/ch32x035_adc.c \
C:/cty\ IoT\ solution/CH32V003F4P6_Dev_Kit_DIY/Firmware/WCH32X05-main/SRC/Peripheral/src/ch32x035_awu.c \
C:/cty\ IoT\ solution/CH32V003F4P6_Dev_Kit_DIY/Firmware/WCH32X05-main/SRC/Peripheral/src/ch32x035_dbgmcu.c \
C:/cty\ IoT\ solution/CH32V003F4P6_Dev_Kit_DIY/Firmware/WCH32X05-main/SRC/Peripheral/src/ch32x035_dma.c \
C:/cty\ IoT\ solution/CH32V003F4P6_Dev_Kit_DIY/Firmware/WCH32X05-main/SRC/Peripheral/src/ch32x035_exti.c \
C:/cty\ IoT\ solution/CH32V003F4P6_Dev_Kit_DIY/Firmware/WCH32X05-main/SRC/Peripheral/src/ch32x035_flash.c \
C:/cty\ IoT\ solution/CH32V003F4P6_Dev_Kit_DIY/Firmware/WCH32X05-main/SRC/Peripheral/src/ch32x035_gpio.c \
C:/cty\ IoT\ solution/CH32V003F4P6_Dev_Kit_DIY/Firmware/WCH32X05-main/SRC/Peripheral/src/ch32x035_i2c.c \
C:/cty\ IoT\ solution/CH32V003F4P6_Dev_Kit_DIY/Firmware/WCH32X05-main/SRC/Peripheral/src/ch32x035_iwdg.c \
C:/cty\ IoT\ solution/CH32V003F4P6_Dev_Kit_DIY/Firmware/WCH32X05-main/SRC/Peripheral/src/ch32x035_misc.c \
C:/cty\ IoT\ solution/CH32V003F4P6_Dev_Kit_DIY/Firmware/WCH32X05-main/SRC/Peripheral/src/ch32x035_opa.c \
C:/cty\ IoT\ solution/CH32V003F4P6_Dev_Kit_DIY/Firmware/WCH32X05-main/SRC/Peripheral/src/ch32x035_pwr.c \
C:/cty\ IoT\ solution/CH32V003F4P6_Dev_Kit_DIY/Firmware/WCH32X05-main/SRC/Peripheral/src/ch32x035_rcc.c \
C:/cty\ IoT\ solution/CH32V003F4P6_Dev_Kit_DIY/Firmware/WCH32X05-main/SRC/Peripheral/src/ch32x035_spi.c \
C:/cty\ IoT\ solution/CH32V003F4P6_Dev_Kit_DIY/Firmware/WCH32X05-main/SRC/Peripheral/src/ch32x035_tim.c \
C:/cty\ IoT\ solution/CH32V003F4P6_Dev_Kit_DIY/Firmware/WCH32X05-main/SRC/Peripheral/src/ch32x035_usart.c \
C:/cty\ IoT\ solution/CH32V003F4P6_Dev_Kit_DIY/Firmware/WCH32X05-main/SRC/Peripheral/src/ch32x035_wwdg.c 

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
Peripheral/src/ch32x035_adc.o: C:/cty\ IoT\ solution/CH32V003F4P6_Dev_Kit_DIY/Firmware/WCH32X05-main/SRC/Peripheral/src/ch32x035_adc.c
	@	@	riscv-none-embed-gcc -march=rv32imacxw -mabi=ilp32 -msmall-data-limit=8 -msave-restore -Os -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -fno-common -Wunused -Wuninitialized  -g -I"C:\cty IoT solution\CH32V003F4P6_Dev_Kit_DIY\Firmware\WCH32X05-main\SRC\Debug" -I"C:\cty IoT solution\CH32V003F4P6_Dev_Kit_DIY\Firmware\WCH32X05-main\SRC\Core" -I"C:\cty IoT solution\CH32V003F4P6_Dev_Kit_DIY\Firmware\WCH32X05-main\GPIO\GPIO_Toggle\User" -I"C:\cty IoT solution\CH32V003F4P6_Dev_Kit_DIY\Firmware\WCH32X05-main\SRC\Peripheral\inc" -std=gnu99 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@	@
Peripheral/src/ch32x035_awu.o: C:/cty\ IoT\ solution/CH32V003F4P6_Dev_Kit_DIY/Firmware/WCH32X05-main/SRC/Peripheral/src/ch32x035_awu.c
	@	@	riscv-none-embed-gcc -march=rv32imacxw -mabi=ilp32 -msmall-data-limit=8 -msave-restore -Os -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -fno-common -Wunused -Wuninitialized  -g -I"C:\cty IoT solution\CH32V003F4P6_Dev_Kit_DIY\Firmware\WCH32X05-main\SRC\Debug" -I"C:\cty IoT solution\CH32V003F4P6_Dev_Kit_DIY\Firmware\WCH32X05-main\SRC\Core" -I"C:\cty IoT solution\CH32V003F4P6_Dev_Kit_DIY\Firmware\WCH32X05-main\GPIO\GPIO_Toggle\User" -I"C:\cty IoT solution\CH32V003F4P6_Dev_Kit_DIY\Firmware\WCH32X05-main\SRC\Peripheral\inc" -std=gnu99 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@	@
Peripheral/src/ch32x035_dbgmcu.o: C:/cty\ IoT\ solution/CH32V003F4P6_Dev_Kit_DIY/Firmware/WCH32X05-main/SRC/Peripheral/src/ch32x035_dbgmcu.c
	@	@	riscv-none-embed-gcc -march=rv32imacxw -mabi=ilp32 -msmall-data-limit=8 -msave-restore -Os -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -fno-common -Wunused -Wuninitialized  -g -I"C:\cty IoT solution\CH32V003F4P6_Dev_Kit_DIY\Firmware\WCH32X05-main\SRC\Debug" -I"C:\cty IoT solution\CH32V003F4P6_Dev_Kit_DIY\Firmware\WCH32X05-main\SRC\Core" -I"C:\cty IoT solution\CH32V003F4P6_Dev_Kit_DIY\Firmware\WCH32X05-main\GPIO\GPIO_Toggle\User" -I"C:\cty IoT solution\CH32V003F4P6_Dev_Kit_DIY\Firmware\WCH32X05-main\SRC\Peripheral\inc" -std=gnu99 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@	@
Peripheral/src/ch32x035_dma.o: C:/cty\ IoT\ solution/CH32V003F4P6_Dev_Kit_DIY/Firmware/WCH32X05-main/SRC/Peripheral/src/ch32x035_dma.c
	@	@	riscv-none-embed-gcc -march=rv32imacxw -mabi=ilp32 -msmall-data-limit=8 -msave-restore -Os -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -fno-common -Wunused -Wuninitialized  -g -I"C:\cty IoT solution\CH32V003F4P6_Dev_Kit_DIY\Firmware\WCH32X05-main\SRC\Debug" -I"C:\cty IoT solution\CH32V003F4P6_Dev_Kit_DIY\Firmware\WCH32X05-main\SRC\Core" -I"C:\cty IoT solution\CH32V003F4P6_Dev_Kit_DIY\Firmware\WCH32X05-main\GPIO\GPIO_Toggle\User" -I"C:\cty IoT solution\CH32V003F4P6_Dev_Kit_DIY\Firmware\WCH32X05-main\SRC\Peripheral\inc" -std=gnu99 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@	@
Peripheral/src/ch32x035_exti.o: C:/cty\ IoT\ solution/CH32V003F4P6_Dev_Kit_DIY/Firmware/WCH32X05-main/SRC/Peripheral/src/ch32x035_exti.c
	@	@	riscv-none-embed-gcc -march=rv32imacxw -mabi=ilp32 -msmall-data-limit=8 -msave-restore -Os -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -fno-common -Wunused -Wuninitialized  -g -I"C:\cty IoT solution\CH32V003F4P6_Dev_Kit_DIY\Firmware\WCH32X05-main\SRC\Debug" -I"C:\cty IoT solution\CH32V003F4P6_Dev_Kit_DIY\Firmware\WCH32X05-main\SRC\Core" -I"C:\cty IoT solution\CH32V003F4P6_Dev_Kit_DIY\Firmware\WCH32X05-main\GPIO\GPIO_Toggle\User" -I"C:\cty IoT solution\CH32V003F4P6_Dev_Kit_DIY\Firmware\WCH32X05-main\SRC\Peripheral\inc" -std=gnu99 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@	@
Peripheral/src/ch32x035_flash.o: C:/cty\ IoT\ solution/CH32V003F4P6_Dev_Kit_DIY/Firmware/WCH32X05-main/SRC/Peripheral/src/ch32x035_flash.c
	@	@	riscv-none-embed-gcc -march=rv32imacxw -mabi=ilp32 -msmall-data-limit=8 -msave-restore -Os -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -fno-common -Wunused -Wuninitialized  -g -I"C:\cty IoT solution\CH32V003F4P6_Dev_Kit_DIY\Firmware\WCH32X05-main\SRC\Debug" -I"C:\cty IoT solution\CH32V003F4P6_Dev_Kit_DIY\Firmware\WCH32X05-main\SRC\Core" -I"C:\cty IoT solution\CH32V003F4P6_Dev_Kit_DIY\Firmware\WCH32X05-main\GPIO\GPIO_Toggle\User" -I"C:\cty IoT solution\CH32V003F4P6_Dev_Kit_DIY\Firmware\WCH32X05-main\SRC\Peripheral\inc" -std=gnu99 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@	@
Peripheral/src/ch32x035_gpio.o: C:/cty\ IoT\ solution/CH32V003F4P6_Dev_Kit_DIY/Firmware/WCH32X05-main/SRC/Peripheral/src/ch32x035_gpio.c
	@	@	riscv-none-embed-gcc -march=rv32imacxw -mabi=ilp32 -msmall-data-limit=8 -msave-restore -Os -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -fno-common -Wunused -Wuninitialized  -g -I"C:\cty IoT solution\CH32V003F4P6_Dev_Kit_DIY\Firmware\WCH32X05-main\SRC\Debug" -I"C:\cty IoT solution\CH32V003F4P6_Dev_Kit_DIY\Firmware\WCH32X05-main\SRC\Core" -I"C:\cty IoT solution\CH32V003F4P6_Dev_Kit_DIY\Firmware\WCH32X05-main\GPIO\GPIO_Toggle\User" -I"C:\cty IoT solution\CH32V003F4P6_Dev_Kit_DIY\Firmware\WCH32X05-main\SRC\Peripheral\inc" -std=gnu99 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@	@
Peripheral/src/ch32x035_i2c.o: C:/cty\ IoT\ solution/CH32V003F4P6_Dev_Kit_DIY/Firmware/WCH32X05-main/SRC/Peripheral/src/ch32x035_i2c.c
	@	@	riscv-none-embed-gcc -march=rv32imacxw -mabi=ilp32 -msmall-data-limit=8 -msave-restore -Os -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -fno-common -Wunused -Wuninitialized  -g -I"C:\cty IoT solution\CH32V003F4P6_Dev_Kit_DIY\Firmware\WCH32X05-main\SRC\Debug" -I"C:\cty IoT solution\CH32V003F4P6_Dev_Kit_DIY\Firmware\WCH32X05-main\SRC\Core" -I"C:\cty IoT solution\CH32V003F4P6_Dev_Kit_DIY\Firmware\WCH32X05-main\GPIO\GPIO_Toggle\User" -I"C:\cty IoT solution\CH32V003F4P6_Dev_Kit_DIY\Firmware\WCH32X05-main\SRC\Peripheral\inc" -std=gnu99 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@	@
Peripheral/src/ch32x035_iwdg.o: C:/cty\ IoT\ solution/CH32V003F4P6_Dev_Kit_DIY/Firmware/WCH32X05-main/SRC/Peripheral/src/ch32x035_iwdg.c
	@	@	riscv-none-embed-gcc -march=rv32imacxw -mabi=ilp32 -msmall-data-limit=8 -msave-restore -Os -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -fno-common -Wunused -Wuninitialized  -g -I"C:\cty IoT solution\CH32V003F4P6_Dev_Kit_DIY\Firmware\WCH32X05-main\SRC\Debug" -I"C:\cty IoT solution\CH32V003F4P6_Dev_Kit_DIY\Firmware\WCH32X05-main\SRC\Core" -I"C:\cty IoT solution\CH32V003F4P6_Dev_Kit_DIY\Firmware\WCH32X05-main\GPIO\GPIO_Toggle\User" -I"C:\cty IoT solution\CH32V003F4P6_Dev_Kit_DIY\Firmware\WCH32X05-main\SRC\Peripheral\inc" -std=gnu99 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@	@
Peripheral/src/ch32x035_misc.o: C:/cty\ IoT\ solution/CH32V003F4P6_Dev_Kit_DIY/Firmware/WCH32X05-main/SRC/Peripheral/src/ch32x035_misc.c
	@	@	riscv-none-embed-gcc -march=rv32imacxw -mabi=ilp32 -msmall-data-limit=8 -msave-restore -Os -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -fno-common -Wunused -Wuninitialized  -g -I"C:\cty IoT solution\CH32V003F4P6_Dev_Kit_DIY\Firmware\WCH32X05-main\SRC\Debug" -I"C:\cty IoT solution\CH32V003F4P6_Dev_Kit_DIY\Firmware\WCH32X05-main\SRC\Core" -I"C:\cty IoT solution\CH32V003F4P6_Dev_Kit_DIY\Firmware\WCH32X05-main\GPIO\GPIO_Toggle\User" -I"C:\cty IoT solution\CH32V003F4P6_Dev_Kit_DIY\Firmware\WCH32X05-main\SRC\Peripheral\inc" -std=gnu99 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@	@
Peripheral/src/ch32x035_opa.o: C:/cty\ IoT\ solution/CH32V003F4P6_Dev_Kit_DIY/Firmware/WCH32X05-main/SRC/Peripheral/src/ch32x035_opa.c
	@	@	riscv-none-embed-gcc -march=rv32imacxw -mabi=ilp32 -msmall-data-limit=8 -msave-restore -Os -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -fno-common -Wunused -Wuninitialized  -g -I"C:\cty IoT solution\CH32V003F4P6_Dev_Kit_DIY\Firmware\WCH32X05-main\SRC\Debug" -I"C:\cty IoT solution\CH32V003F4P6_Dev_Kit_DIY\Firmware\WCH32X05-main\SRC\Core" -I"C:\cty IoT solution\CH32V003F4P6_Dev_Kit_DIY\Firmware\WCH32X05-main\GPIO\GPIO_Toggle\User" -I"C:\cty IoT solution\CH32V003F4P6_Dev_Kit_DIY\Firmware\WCH32X05-main\SRC\Peripheral\inc" -std=gnu99 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@	@
Peripheral/src/ch32x035_pwr.o: C:/cty\ IoT\ solution/CH32V003F4P6_Dev_Kit_DIY/Firmware/WCH32X05-main/SRC/Peripheral/src/ch32x035_pwr.c
	@	@	riscv-none-embed-gcc -march=rv32imacxw -mabi=ilp32 -msmall-data-limit=8 -msave-restore -Os -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -fno-common -Wunused -Wuninitialized  -g -I"C:\cty IoT solution\CH32V003F4P6_Dev_Kit_DIY\Firmware\WCH32X05-main\SRC\Debug" -I"C:\cty IoT solution\CH32V003F4P6_Dev_Kit_DIY\Firmware\WCH32X05-main\SRC\Core" -I"C:\cty IoT solution\CH32V003F4P6_Dev_Kit_DIY\Firmware\WCH32X05-main\GPIO\GPIO_Toggle\User" -I"C:\cty IoT solution\CH32V003F4P6_Dev_Kit_DIY\Firmware\WCH32X05-main\SRC\Peripheral\inc" -std=gnu99 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@	@
Peripheral/src/ch32x035_rcc.o: C:/cty\ IoT\ solution/CH32V003F4P6_Dev_Kit_DIY/Firmware/WCH32X05-main/SRC/Peripheral/src/ch32x035_rcc.c
	@	@	riscv-none-embed-gcc -march=rv32imacxw -mabi=ilp32 -msmall-data-limit=8 -msave-restore -Os -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -fno-common -Wunused -Wuninitialized  -g -I"C:\cty IoT solution\CH32V003F4P6_Dev_Kit_DIY\Firmware\WCH32X05-main\SRC\Debug" -I"C:\cty IoT solution\CH32V003F4P6_Dev_Kit_DIY\Firmware\WCH32X05-main\SRC\Core" -I"C:\cty IoT solution\CH32V003F4P6_Dev_Kit_DIY\Firmware\WCH32X05-main\GPIO\GPIO_Toggle\User" -I"C:\cty IoT solution\CH32V003F4P6_Dev_Kit_DIY\Firmware\WCH32X05-main\SRC\Peripheral\inc" -std=gnu99 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@	@
Peripheral/src/ch32x035_spi.o: C:/cty\ IoT\ solution/CH32V003F4P6_Dev_Kit_DIY/Firmware/WCH32X05-main/SRC/Peripheral/src/ch32x035_spi.c
	@	@	riscv-none-embed-gcc -march=rv32imacxw -mabi=ilp32 -msmall-data-limit=8 -msave-restore -Os -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -fno-common -Wunused -Wuninitialized  -g -I"C:\cty IoT solution\CH32V003F4P6_Dev_Kit_DIY\Firmware\WCH32X05-main\SRC\Debug" -I"C:\cty IoT solution\CH32V003F4P6_Dev_Kit_DIY\Firmware\WCH32X05-main\SRC\Core" -I"C:\cty IoT solution\CH32V003F4P6_Dev_Kit_DIY\Firmware\WCH32X05-main\GPIO\GPIO_Toggle\User" -I"C:\cty IoT solution\CH32V003F4P6_Dev_Kit_DIY\Firmware\WCH32X05-main\SRC\Peripheral\inc" -std=gnu99 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@	@
Peripheral/src/ch32x035_tim.o: C:/cty\ IoT\ solution/CH32V003F4P6_Dev_Kit_DIY/Firmware/WCH32X05-main/SRC/Peripheral/src/ch32x035_tim.c
	@	@	riscv-none-embed-gcc -march=rv32imacxw -mabi=ilp32 -msmall-data-limit=8 -msave-restore -Os -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -fno-common -Wunused -Wuninitialized  -g -I"C:\cty IoT solution\CH32V003F4P6_Dev_Kit_DIY\Firmware\WCH32X05-main\SRC\Debug" -I"C:\cty IoT solution\CH32V003F4P6_Dev_Kit_DIY\Firmware\WCH32X05-main\SRC\Core" -I"C:\cty IoT solution\CH32V003F4P6_Dev_Kit_DIY\Firmware\WCH32X05-main\GPIO\GPIO_Toggle\User" -I"C:\cty IoT solution\CH32V003F4P6_Dev_Kit_DIY\Firmware\WCH32X05-main\SRC\Peripheral\inc" -std=gnu99 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@	@
Peripheral/src/ch32x035_usart.o: C:/cty\ IoT\ solution/CH32V003F4P6_Dev_Kit_DIY/Firmware/WCH32X05-main/SRC/Peripheral/src/ch32x035_usart.c
	@	@	riscv-none-embed-gcc -march=rv32imacxw -mabi=ilp32 -msmall-data-limit=8 -msave-restore -Os -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -fno-common -Wunused -Wuninitialized  -g -I"C:\cty IoT solution\CH32V003F4P6_Dev_Kit_DIY\Firmware\WCH32X05-main\SRC\Debug" -I"C:\cty IoT solution\CH32V003F4P6_Dev_Kit_DIY\Firmware\WCH32X05-main\SRC\Core" -I"C:\cty IoT solution\CH32V003F4P6_Dev_Kit_DIY\Firmware\WCH32X05-main\GPIO\GPIO_Toggle\User" -I"C:\cty IoT solution\CH32V003F4P6_Dev_Kit_DIY\Firmware\WCH32X05-main\SRC\Peripheral\inc" -std=gnu99 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@	@
Peripheral/src/ch32x035_wwdg.o: C:/cty\ IoT\ solution/CH32V003F4P6_Dev_Kit_DIY/Firmware/WCH32X05-main/SRC/Peripheral/src/ch32x035_wwdg.c
	@	@	riscv-none-embed-gcc -march=rv32imacxw -mabi=ilp32 -msmall-data-limit=8 -msave-restore -Os -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -fno-common -Wunused -Wuninitialized  -g -I"C:\cty IoT solution\CH32V003F4P6_Dev_Kit_DIY\Firmware\WCH32X05-main\SRC\Debug" -I"C:\cty IoT solution\CH32V003F4P6_Dev_Kit_DIY\Firmware\WCH32X05-main\SRC\Core" -I"C:\cty IoT solution\CH32V003F4P6_Dev_Kit_DIY\Firmware\WCH32X05-main\GPIO\GPIO_Toggle\User" -I"C:\cty IoT solution\CH32V003F4P6_Dev_Kit_DIY\Firmware\WCH32X05-main\SRC\Peripheral\inc" -std=gnu99 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@	@

