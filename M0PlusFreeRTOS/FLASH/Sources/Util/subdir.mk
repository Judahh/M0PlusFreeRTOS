################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../../makefile.local

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS_QUOTED += \
"../Sources/Util/Accelerometer.c" \
"../Sources/Util/Gyroscope.c" \
"../Sources/Util/Led.c" \

C_SRCS += \
../Sources/Util/Accelerometer.c \
../Sources/Util/Gyroscope.c \
../Sources/Util/Led.c \

OBJS += \
./Sources/Util/Accelerometer.o \
./Sources/Util/Gyroscope.o \
./Sources/Util/Led.o \

OBJS_QUOTED += \
"./Sources/Util/Accelerometer.o" \
"./Sources/Util/Gyroscope.o" \
"./Sources/Util/Led.o" \

C_DEPS += \
./Sources/Util/Accelerometer.d \
./Sources/Util/Gyroscope.d \
./Sources/Util/Led.d \

OBJS_OS_FORMAT += \
./Sources/Util/Accelerometer.o \
./Sources/Util/Gyroscope.o \
./Sources/Util/Led.o \

C_DEPS_QUOTED += \
"./Sources/Util/Accelerometer.d" \
"./Sources/Util/Gyroscope.d" \
"./Sources/Util/Led.d" \


# Each subdirectory must supply rules for building sources it contributes
Sources/Util/Accelerometer.o: ../Sources/Util/Accelerometer.c
	@echo 'Building file: $<'
	@echo 'Executing target #4 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Sources/Util/Accelerometer.args" -MMD -MP -MF"$(@:%.o=%.d)" -o"Sources/Util/Accelerometer.o"
	@echo 'Finished building: $<'
	@echo ' '

Sources/Util/Gyroscope.o: ../Sources/Util/Gyroscope.c
	@echo 'Building file: $<'
	@echo 'Executing target #5 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Sources/Util/Gyroscope.args" -MMD -MP -MF"$(@:%.o=%.d)" -o"Sources/Util/Gyroscope.o"
	@echo 'Finished building: $<'
	@echo ' '

Sources/Util/Led.o: ../Sources/Util/Led.c
	@echo 'Building file: $<'
	@echo 'Executing target #6 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Sources/Util/Led.args" -MMD -MP -MF"$(@:%.o=%.d)" -o"Sources/Util/Led.o"
	@echo 'Finished building: $<'
	@echo ' '


