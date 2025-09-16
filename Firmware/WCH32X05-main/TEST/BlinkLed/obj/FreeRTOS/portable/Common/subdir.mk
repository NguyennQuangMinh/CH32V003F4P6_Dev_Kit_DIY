################################################################################
# MRS Version: 1.9.2
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../FreeRTOS/portable/Common/mpu_wrappers.c 

OBJS += \
./FreeRTOS/portable/Common/mpu_wrappers.o 

C_DEPS += \
./FreeRTOS/portable/Common/mpu_wrappers.d 


# Each subdirectory must supply rules for building sources it contributes
FreeRTOS/portable/Common/%.o: ../FreeRTOS/portable/Common/%.c
	@	@	riscv-none-embed-gcc -march=rv32imacxw -mabi=ilp32 -msmall-data-limit=8 -msave-restore -Os -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -fno-common -Wunused -Wuninitialized  -g -I"C:\cty IoT solution\CH32V003F4P6_Dev_Kit_DIY\Firmware\WCH32X05-main\TEST\BlinkLed\Debug" -I"C:\cty IoT solution\CH32V003F4P6_Dev_Kit_DIY\Firmware\WCH32X05-main\TEST\BlinkLed\Core" -I"C:\cty IoT solution\CH32V003F4P6_Dev_Kit_DIY\Firmware\WCH32X05-main\TEST\BlinkLed\User" -I"C:\cty IoT solution\CH32V003F4P6_Dev_Kit_DIY\Firmware\WCH32X05-main\TEST\BlinkLed\Peripheral\inc" -std=gnu99 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@	@

