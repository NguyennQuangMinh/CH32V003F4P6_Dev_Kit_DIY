################################################################################
# MRS Version: 1.9.2
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../User/UART.c \
../User/ch32x035_it.c \
../User/ch32x035_usbfs_device.c \
../User/main.c \
../User/system_ch32x035.c \
../User/usb_desc.c 

OBJS += \
./User/UART.o \
./User/ch32x035_it.o \
./User/ch32x035_usbfs_device.o \
./User/main.o \
./User/system_ch32x035.o \
./User/usb_desc.o 

C_DEPS += \
./User/UART.d \
./User/ch32x035_it.d \
./User/ch32x035_usbfs_device.d \
./User/main.d \
./User/system_ch32x035.d \
./User/usb_desc.d 


# Each subdirectory must supply rules for building sources it contributes
User/%.o: ../User/%.c
	@	@	riscv-none-embed-gcc -march=rv32imacxw -mabi=ilp32 -msmall-data-limit=8 -msave-restore -Os -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -fno-common -Wunused -Wuninitialized  -g -I"D:\WCH-MCU\CH32X35C8\EVT\EXAM\SRC\Debug" -I"D:\WCH-MCU\CH32X35C8\EVT\EXAM\SRC\Core" -I"D:\WCH-MCU\CH32X35C8\EVT\EXAM\USB\USBFS\DEVICE\SimulateCDC\User" -I"D:\WCH-MCU\CH32X35C8\EVT\EXAM\SRC\Peripheral\inc" -std=gnu99 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@	@

