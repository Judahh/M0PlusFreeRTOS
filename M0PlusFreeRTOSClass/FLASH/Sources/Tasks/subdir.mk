################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../../makefile.local

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS_QUOTED += \
"../Sources/Tasks/TaskAccelerometer.c" \
"../Sources/Tasks/TaskBuzzer.c" \
"../Sources/Tasks/TaskError.c" \

C_SRCS += \
../Sources/Tasks/TaskAccelerometer.c \
../Sources/Tasks/TaskBuzzer.c \
../Sources/Tasks/TaskError.c \

OBJS += \
./Sources/Tasks/TaskAccelerometer.o \
./Sources/Tasks/TaskBuzzer.o \
./Sources/Tasks/TaskError.o \

OBJS_QUOTED += \
"./Sources/Tasks/TaskAccelerometer.o" \
"./Sources/Tasks/TaskBuzzer.o" \
"./Sources/Tasks/TaskError.o" \

C_DEPS += \
./Sources/Tasks/TaskAccelerometer.d \
./Sources/Tasks/TaskBuzzer.d \
./Sources/Tasks/TaskError.d \

OBJS_OS_FORMAT += \
./Sources/Tasks/TaskAccelerometer.o \
./Sources/Tasks/TaskBuzzer.o \
./Sources/Tasks/TaskError.o \

C_DEPS_QUOTED += \
"./Sources/Tasks/TaskAccelerometer.d" \
"./Sources/Tasks/TaskBuzzer.d" \
"./Sources/Tasks/TaskError.d" \


# Each subdirectory must supply rules for building sources it contributes
Sources/Tasks/TaskAccelerometer.o: ../Sources/Tasks/TaskAccelerometer.c
	@echo 'Building file: $<'
	@echo 'Executing target #7 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Sources/Tasks/TaskAccelerometer.args" -MMD -MP -MF"$(@:%.o=%.d)" -o"Sources/Tasks/TaskAccelerometer.o"
	@echo 'Finished building: $<'
	@echo ' '

Sources/Tasks/TaskBuzzer.o: ../Sources/Tasks/TaskBuzzer.c
	@echo 'Building file: $<'
	@echo 'Executing target #8 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Sources/Tasks/TaskBuzzer.args" -MMD -MP -MF"$(@:%.o=%.d)" -o"Sources/Tasks/TaskBuzzer.o"
	@echo 'Finished building: $<'
	@echo ' '

Sources/Tasks/TaskError.o: ../Sources/Tasks/TaskError.c
	@echo 'Building file: $<'
	@echo 'Executing target #9 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Sources/Tasks/TaskError.args" -MMD -MP -MF"$(@:%.o=%.d)" -o"Sources/Tasks/TaskError.o"
	@echo 'Finished building: $<'
	@echo ' '


