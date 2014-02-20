################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../../makefile.local

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS_QUOTED += \
"../Sources/Util/Accelerometer.c" \

C_SRCS += \
../Sources/Util/Accelerometer.c \

OBJS += \
./Sources/Util/Accelerometer.o \

C_DEPS += \
./Sources/Util/Accelerometer.d \

OBJS_QUOTED += \
"./Sources/Util/Accelerometer.o" \

C_DEPS_QUOTED += \
"./Sources/Util/Accelerometer.d" \

OBJS_OS_FORMAT += \
./Sources/Util/Accelerometer.o \


# Each subdirectory must supply rules for building sources it contributes
Sources/Util/Accelerometer.o: ../Sources/Util/Accelerometer.c
	@echo 'Building file: $<'
	@echo 'Executing target #4 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Sources/Util/Accelerometer.args" -MMD -MP -MF"$(@:%.o=%.d)" -o"Sources/Util/Accelerometer.o"
	@echo 'Finished building: $<'
	@echo ' '


