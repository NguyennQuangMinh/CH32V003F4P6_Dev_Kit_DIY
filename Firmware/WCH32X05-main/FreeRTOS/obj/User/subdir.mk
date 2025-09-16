################################################################################
# MRS Version: 1.9.2
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../User/button.c \
../User/ch32x035_it.c \
../User/eeprom.c \
../User/gpio.c \
../User/led7.c \
../User/main.c \
../User/rtc.c \
../User/system_ch32x035.c \
../User/timer.c 

OBJS += \
./User/button.o \
./User/ch32x035_it.o \
./User/eeprom.o \
./User/gpio.o \
./User/led7.o \
./User/main.o \
./User/rtc.o \
./User/system_ch32x035.o \
./User/timer.o 

C_DEPS += \
./User/button.d \
./User/ch32x035_it.d \
./User/eeprom.d \
./User/gpio.d \
./User/led7.d \
./User/main.d \
./User/rtc.d \
./User/system_ch32x035.d \
./User/timer.d 


# Each subdirectory must supply rules for building sources it contributes
User/%.o: ../User/%.c
	@	@	riscv-none-embed-gcc -march=rv32imacxw -mabi=ilp32 -msmall-data-limit=8 -msave-restore -Os -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -fno-common -Wunused  -g -I"C:\cty IoT solution\CH32V003F4P6_Dev_Kit_DIY\Firmware\WCH32X05-main\SRC\Debug" -I"C:\cty IoT solution\CH32V003F4P6_Dev_Kit_DIY\Firmware\WCH32X05-main\FreeRTOS\Core" -I"C:\cty IoT solution\CH32V003F4P6_Dev_Kit_DIY\Firmware\WCH32X05-main\FreeRTOS\User" -I"C:\cty IoT solution\CH32V003F4P6_Dev_Kit_DIY\Firmware\WCH32X05-main\SRC\Peripheral\inc" -I"C:\cty IoT solution\CH32V003F4P6_Dev_Kit_DIY\Firmware\WCH32X05-main\FreeRTOS\FreeRTOS" -I"C:\cty IoT solution\CH32V003F4P6_Dev_Kit_DIY\Firmware\WCH32X05-main\FreeRTOS\FreeRTOS\include" -I"C:\cty IoT solution\CH32V003F4P6_Dev_Kit_DIY\Firmware\WCH32X05-main\FreeRTOS\FreeRTOS\portable" -I"C:\cty IoT solution\CH32V003F4P6_Dev_Kit_DIY\Firmware\WCH32X05-main\FreeRTOS\FreeRTOS\portable\Common" -I"C:\cty IoT solution\CH32V003F4P6_Dev_Kit_DIY\Firmware\WCH32X05-main\FreeRTOS\FreeRTOS\portable\GCC\RISC-V" -I"C:\cty IoT solution\CH32V003F4P6_Dev_Kit_DIY\Firmware\WCH32X05-main\FreeRTOS\FreeRTOS\portable\GCC\RISC-V\chip_specific_extensions\RV32I_PFIC_no_extensions" -I"C:\cty IoT solution\CH32V003F4P6_Dev_Kit_DIY\Firmware\WCH32X05-main\FreeRTOS\FreeRTOS\portable\MemMang" -std=gnu99 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@	@

