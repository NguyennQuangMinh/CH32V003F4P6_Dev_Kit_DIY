################################################################################
# MRS Version: 1.9.2
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
S_UPPER_SRCS += \
../Startup/startup_ch32x035.S 

OBJS += \
./Startup/startup_ch32x035.o 

S_UPPER_DEPS += \
./Startup/startup_ch32x035.d 


# Each subdirectory must supply rules for building sources it contributes
Startup/%.o: ../Startup/%.S
	@	@	riscv-none-embed-gcc -march=rv32imacxw -mabi=ilp32 -msmall-data-limit=8 -msave-restore -Os -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -fno-common -Wunused  -g -x assembler-with-cpp -I"C:\cty IoT solution\CH32V003F4P6_Dev_Kit_DIY\Firmware\WCH32X05-main\FreeRTOS\FreeRTOS" -I"C:\cty IoT solution\CH32V003F4P6_Dev_Kit_DIY\Firmware\WCH32X05-main\FreeRTOS\FreeRTOS\include" -I"C:\cty IoT solution\CH32V003F4P6_Dev_Kit_DIY\Firmware\WCH32X05-main\FreeRTOS\FreeRTOS\portable\Common" -I"C:\cty IoT solution\CH32V003F4P6_Dev_Kit_DIY\Firmware\WCH32X05-main\FreeRTOS\FreeRTOS\portable\MemMang" -I"C:\cty IoT solution\CH32V003F4P6_Dev_Kit_DIY\Firmware\WCH32X05-main\FreeRTOS\FreeRTOS\portable\GCC\RISC-V" -I"C:\cty IoT solution\CH32V003F4P6_Dev_Kit_DIY\Firmware\WCH32X05-main\FreeRTOS\FreeRTOS\portable\GCC\RISC-V\chip_specific_extensions\RV32I_PFIC_no_extensions" -I"C:\cty IoT solution\CH32V003F4P6_Dev_Kit_DIY\Firmware\WCH32X05-main\FreeRTOS\Startup" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@	@

