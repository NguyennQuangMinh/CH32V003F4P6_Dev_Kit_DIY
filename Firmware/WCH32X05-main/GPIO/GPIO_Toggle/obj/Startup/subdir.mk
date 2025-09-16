################################################################################
# MRS Version: 1.9.2
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
S_UPPER_SRCS += \
C:/cty\ IoT\ solution/CH32V003F4P6_Dev_Kit_DIY/Firmware/WCH32X05-main/SRC/Startup/startup_ch32x035.S 

OBJS += \
./Startup/startup_ch32x035.o 

S_UPPER_DEPS += \
./Startup/startup_ch32x035.d 


# Each subdirectory must supply rules for building sources it contributes
Startup/startup_ch32x035.o: C:/cty\ IoT\ solution/CH32V003F4P6_Dev_Kit_DIY/Firmware/WCH32X05-main/SRC/Startup/startup_ch32x035.S
	@	@	riscv-none-embed-gcc -march=rv32imacxw -mabi=ilp32 -msmall-data-limit=8 -msave-restore -Os -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -fno-common -Wunused -Wuninitialized  -g -x assembler-with-cpp -I"C:\cty IoT solution\CH32V003F4P6_Dev_Kit_DIY\Firmware\WCH32X05-main\SRC\Startup" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@	@

