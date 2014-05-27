################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../../makefile.local

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS_QUOTED += \
"../Sources/Util/Accelerometer.c" \
"../Sources/Util/GlobalVariables.c" \
"../Sources/Util/Led.c" \

C_SRCS += \
../Sources/Util/Accelerometer.c \
../Sources/Util/GlobalVariables.c \
../Sources/Util/Led.c \

OBJS += \
./Sources/Util/Accelerometer.o \
./Sources/Util/GlobalVariables.o \
./Sources/Util/Led.o \

OBJS_QUOTED += \
"./Sources/Util/Accelerometer.o" \
"./Sources/Util/GlobalVariables.o" \
"./Sources/Util/Led.o" \

C_DEPS += \
./Sources/Util/Accelerometer.d \
./Sources/Util/GlobalVariables.d \
./Sources/Util/Led.d \

OBJS_OS_FORMAT += \
./Sources/Util/Accelerometer.o \
./Sources/Util/GlobalVariables.o \
./Sources/Util/Led.o \

C_DEPS_QUOTED += \
"./Sources/Util/Accelerometer.d" \
"./Sources/Util/GlobalVariables.d" \
"./Sources/Util/Led.d" \


# Each subdirectory must supply rules for building sources it contributes
Sources/Util/Accelerometer.o: ../Sources/Util/Accelerometer.c
	@echo 'Building file: $<'
	@echo 'Executing target #4 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Sources/Util/Accelerometer.args" -MMD -MP -MF"$(@:%.o=%.d)" -o"Sources/Util/Accelerometer.o"
	@echo 'Finished building: $<'
	@echo ' '

Sources/Util/GlobalVariables.o: ../Sources/Util/GlobalVariables.c
	@echo 'Building file: $<'
	@echo 'Executing target #5 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Sources/Util/GlobalVariables.args" -MMD -MP -MF"$(@:%.o=%.d)" -o"Sources/Util/GlobalVariables.o"
	@echo 'Finished building: $<'
	@echo ' '

Sources/Util/Led.o: ../Sources/Util/Led.c
	@echo 'Building file: $<'
	@echo 'Executing target #6 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Sources/Util/Led.args" -MMD -MP -MF"$(@:%.o=%.d)" -o"Sources/Util/Led.o"
	@echo 'Finished building: $<'
	@echo ' '


