################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../../makefile.local

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS_QUOTED += \
"../Sources/Tasks/TaskAccelerometer.c" \
"../Sources/Tasks/TaskBlueLed.c" \
"../Sources/Tasks/TaskBuzzer.c" \

C_SRCS += \
../Sources/Tasks/TaskAccelerometer.c \
../Sources/Tasks/TaskBlueLed.c \
../Sources/Tasks/TaskBuzzer.c \

OBJS += \
./Sources/Tasks/TaskAccelerometer.o \
./Sources/Tasks/TaskBlueLed.o \
./Sources/Tasks/TaskBuzzer.o \

OBJS_QUOTED += \
"./Sources/Tasks/TaskAccelerometer.o" \
"./Sources/Tasks/TaskBlueLed.o" \
"./Sources/Tasks/TaskBuzzer.o" \

C_DEPS += \
./Sources/Tasks/TaskAccelerometer.d \
./Sources/Tasks/TaskBlueLed.d \
./Sources/Tasks/TaskBuzzer.d \

OBJS_OS_FORMAT += \
./Sources/Tasks/TaskAccelerometer.o \
./Sources/Tasks/TaskBlueLed.o \
./Sources/Tasks/TaskBuzzer.o \

C_DEPS_QUOTED += \
"./Sources/Tasks/TaskAccelerometer.d" \
"./Sources/Tasks/TaskBlueLed.d" \
"./Sources/Tasks/TaskBuzzer.d" \


# Each subdirectory must supply rules for building sources it contributes
Sources/Tasks/TaskAccelerometer.o: ../Sources/Tasks/TaskAccelerometer.c
	@echo 'Building file: $<'
	@echo 'Executing target #7 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Sources/Tasks/TaskAccelerometer.args" -MMD -MP -MF"$(@:%.o=%.d)" -o"Sources/Tasks/TaskAccelerometer.o"
	@echo 'Finished building: $<'
	@echo ' '

Sources/Tasks/TaskBlueLed.o: ../Sources/Tasks/TaskBlueLed.c
	@echo 'Building file: $<'
	@echo 'Executing target #8 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Sources/Tasks/TaskBlueLed.args" -MMD -MP -MF"$(@:%.o=%.d)" -o"Sources/Tasks/TaskBlueLed.o"
	@echo 'Finished building: $<'
	@echo ' '

Sources/Tasks/TaskBuzzer.o: ../Sources/Tasks/TaskBuzzer.c
	@echo 'Building file: $<'
	@echo 'Executing target #9 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Sources/Tasks/TaskBuzzer.args" -MMD -MP -MF"$(@:%.o=%.d)" -o"Sources/Tasks/TaskBuzzer.o"
	@echo 'Finished building: $<'
	@echo ' '


