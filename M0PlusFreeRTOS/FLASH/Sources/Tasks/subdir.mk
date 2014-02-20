################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../../makefile.local

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS_QUOTED += \
"../Sources/Tasks/TaskAccelerometer.c" \
"../Sources/Tasks/TaskBlueLed.c" \
"../Sources/Tasks/TaskGreenLed.c" \
"../Sources/Tasks/TaskRedLed.c" \

C_SRCS += \
../Sources/Tasks/TaskAccelerometer.c \
../Sources/Tasks/TaskBlueLed.c \
../Sources/Tasks/TaskGreenLed.c \
../Sources/Tasks/TaskRedLed.c \

OBJS += \
./Sources/Tasks/TaskAccelerometer.o \
./Sources/Tasks/TaskBlueLed.o \
./Sources/Tasks/TaskGreenLed.o \
./Sources/Tasks/TaskRedLed.o \

C_DEPS += \
./Sources/Tasks/TaskAccelerometer.d \
./Sources/Tasks/TaskBlueLed.d \
./Sources/Tasks/TaskGreenLed.d \
./Sources/Tasks/TaskRedLed.d \

OBJS_QUOTED += \
"./Sources/Tasks/TaskAccelerometer.o" \
"./Sources/Tasks/TaskBlueLed.o" \
"./Sources/Tasks/TaskGreenLed.o" \
"./Sources/Tasks/TaskRedLed.o" \

C_DEPS_QUOTED += \
"./Sources/Tasks/TaskAccelerometer.d" \
"./Sources/Tasks/TaskBlueLed.d" \
"./Sources/Tasks/TaskGreenLed.d" \
"./Sources/Tasks/TaskRedLed.d" \

OBJS_OS_FORMAT += \
./Sources/Tasks/TaskAccelerometer.o \
./Sources/Tasks/TaskBlueLed.o \
./Sources/Tasks/TaskGreenLed.o \
./Sources/Tasks/TaskRedLed.o \


# Each subdirectory must supply rules for building sources it contributes
Sources/Tasks/TaskAccelerometer.o: ../Sources/Tasks/TaskAccelerometer.c
	@echo 'Building file: $<'
	@echo 'Executing target #5 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Sources/Tasks/TaskAccelerometer.args" -MMD -MP -MF"$(@:%.o=%.d)" -o"Sources/Tasks/TaskAccelerometer.o"
	@echo 'Finished building: $<'
	@echo ' '

Sources/Tasks/TaskBlueLed.o: ../Sources/Tasks/TaskBlueLed.c
	@echo 'Building file: $<'
	@echo 'Executing target #6 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Sources/Tasks/TaskBlueLed.args" -MMD -MP -MF"$(@:%.o=%.d)" -o"Sources/Tasks/TaskBlueLed.o"
	@echo 'Finished building: $<'
	@echo ' '

Sources/Tasks/TaskGreenLed.o: ../Sources/Tasks/TaskGreenLed.c
	@echo 'Building file: $<'
	@echo 'Executing target #7 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Sources/Tasks/TaskGreenLed.args" -MMD -MP -MF"$(@:%.o=%.d)" -o"Sources/Tasks/TaskGreenLed.o"
	@echo 'Finished building: $<'
	@echo ' '

Sources/Tasks/TaskRedLed.o: ../Sources/Tasks/TaskRedLed.c
	@echo 'Building file: $<'
	@echo 'Executing target #8 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Sources/Tasks/TaskRedLed.args" -MMD -MP -MF"$(@:%.o=%.d)" -o"Sources/Tasks/TaskRedLed.o"
	@echo 'Finished building: $<'
	@echo ' '


