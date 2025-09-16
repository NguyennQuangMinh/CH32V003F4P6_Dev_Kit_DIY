################################################################################
# MRS Version: 1.9.2
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
D:/WCH-MCU/CH32X35C8/EVT/EXAM/SRC/Debug/debug.c 

OBJS += \
./Debug/debug.o 

C_DEPS += \
./Debug/debug.d 


# Each subdirectory must supply rules for building sources it contributes
Debug/debug.o: D:/WCH-MCU/CH32X35C8/EVT/EXAM/SRC/Debug/debug.c
	@	@	riscv-none-embed-gcc -march=rv32imacxw -mabi=ilp32 -msmall-data-limit=8 -msave-restore -Os -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -fno-common -Wunused -Wuninitialized  -g -I"D:\WCH-MCU\CH32X35C8\EVT\EXAM\SRC\Debug" -I"D:\WCH-MCU\CH32X35C8\EVT\EXAM\SRC\Core" -I"D:\WCH-MCU\CH32X35C8\EVT\EXAM\IAP\USB_UART\CH32X035_APP\User" -I"D:\WCH-MCU\CH32X35C8\EVT\EXAM\SRC\Peripheral\inc" -std=gnu99 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@	@

