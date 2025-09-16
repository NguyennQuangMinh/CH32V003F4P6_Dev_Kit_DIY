################################################################################
# MRS Version: 1.9.2
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
C:/cty\ IoT\ solution/CH32V003F4P6_Dev_Kit_DIY/Firmware/WCH32X05-main/SRC/Debug/debug.c 

OBJS += \
./Debug/debug.o 

C_DEPS += \
./Debug/debug.d 


# Each subdirectory must supply rules for building sources it contributes
Debug/debug.o: C:/cty\ IoT\ solution/CH32V003F4P6_Dev_Kit_DIY/Firmware/WCH32X05-main/SRC/Debug/debug.c
	@	@	riscv-none-embed-gcc -march=rv32imacxw -mabi=ilp32 -msmall-data-limit=8 -msave-restore -Os -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -fno-common -Wunused -Wuninitialized  -g -I"C:\cty IoT solution\CH32V003F4P6_Dev_Kit_DIY\Firmware\WCH32X05-main\SRC\Debug" -I"C:\cty IoT solution\CH32V003F4P6_Dev_Kit_DIY\Firmware\WCH32X05-main\SRC\Core" -I"C:\cty IoT solution\CH32V003F4P6_Dev_Kit_DIY\Firmware\WCH32X05-main\GPIO\GPIO_Toggle\User" -I"C:\cty IoT solution\CH32V003F4P6_Dev_Kit_DIY\Firmware\WCH32X05-main\SRC\Peripheral\inc" -std=gnu99 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@	@

