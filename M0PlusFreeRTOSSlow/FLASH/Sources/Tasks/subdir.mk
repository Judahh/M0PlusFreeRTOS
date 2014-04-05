################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../../makefile.local

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS_QUOTED += \
"../Sources/Tasks/TaskBlueLed.c" \
"../Sources/Tasks/TaskGreenLed.c" \
"../Sources/Tasks/TaskRedLed.c" \
"../Sources/Tasks/TaskRedLed2.c" \
"../Sources/Tasks/TaskSendString.c" \
"../Sources/Tasks/TaskSendString2.c" \

C_SRCS += \
../Sources/Tasks/TaskBlueLed.c \
../Sources/Tasks/TaskGreenLed.c \
../Sources/Tasks/TaskRedLed.c \
../Sources/Tasks/TaskRedLed2.c \
../Sources/Tasks/TaskSendString.c \
../Sources/Tasks/TaskSendString2.c \

OBJS += \
./Sources/Tasks/TaskBlueLed.o \
./Sources/Tasks/TaskGreenLed.o \
./Sources/Tasks/TaskRedLed.o \
./Sources/Tasks/TaskRedLed2.o \
./Sources/Tasks/TaskSendString.o \
./Sources/Tasks/TaskSendString2.o \

OBJS_QUOTED += \
"./Sources/Tasks/TaskBlueLed.o" \
"./Sources/Tasks/TaskGreenLed.o" \
"./Sources/Tasks/TaskRedLed.o" \
"./Sources/Tasks/TaskRedLed2.o" \
"./Sources/Tasks/TaskSendString.o" \
"./Sources/Tasks/TaskSendString2.o" \

C_DEPS += \
./Sources/Tasks/TaskBlueLed.d \
./Sources/Tasks/TaskGreenLed.d \
./Sources/Tasks/TaskRedLed.d \
./Sources/Tasks/TaskRedLed2.d \
./Sources/Tasks/TaskSendString.d \
./Sources/Tasks/TaskSendString2.d \

OBJS_OS_FORMAT += \
./Sources/Tasks/TaskBlueLed.o \
./Sources/Tasks/TaskGreenLed.o \
./Sources/Tasks/TaskRedLed.o \
./Sources/Tasks/TaskRedLed2.o \
./Sources/Tasks/TaskSendString.o \
./Sources/Tasks/TaskSendString2.o \

C_DEPS_QUOTED += \
"./Sources/Tasks/TaskBlueLed.d" \
"./Sources/Tasks/TaskGreenLed.d" \
"./Sources/Tasks/TaskRedLed.d" \
"./Sources/Tasks/TaskRedLed2.d" \
"./Sources/Tasks/TaskSendString.d" \
"./Sources/Tasks/TaskSendString2.d" \


# Each subdirectory must supply rules for building sources it contributes
Sources/Tasks/TaskBlueLed.o: ../Sources/Tasks/TaskBlueLed.c
	@echo 'Building file: $<'
	@echo 'Executing target #5 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Sources/Tasks/TaskBlueLed.args" -MMD -MP -MF"$(@:%.o=%.d)" -o"Sources/Tasks/TaskBlueLed.o"
	@echo 'Finished building: $<'
	@echo ' '

Sources/Tasks/TaskGreenLed.o: ../Sources/Tasks/TaskGreenLed.c
	@echo 'Building file: $<'
	@echo 'Executing target #6 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Sources/Tasks/TaskGreenLed.args" -MMD -MP -MF"$(@:%.o=%.d)" -o"Sources/Tasks/TaskGreenLed.o"
	@echo 'Finished building: $<'
	@echo ' '

Sources/Tasks/TaskRedLed.o: ../Sources/Tasks/TaskRedLed.c
	@echo 'Building file: $<'
	@echo 'Executing target #7 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Sources/Tasks/TaskRedLed.args" -MMD -MP -MF"$(@:%.o=%.d)" -o"Sources/Tasks/TaskRedLed.o"
	@echo 'Finished building: $<'
	@echo ' '

Sources/Tasks/TaskRedLed2.o: ../Sources/Tasks/TaskRedLed2.c
	@echo 'Building file: $<'
	@echo 'Executing target #8 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Sources/Tasks/TaskRedLed2.args" -MMD -MP -MF"$(@:%.o=%.d)" -o"Sources/Tasks/TaskRedLed2.o"
	@echo 'Finished building: $<'
	@echo ' '

Sources/Tasks/TaskSendString.o: ../Sources/Tasks/TaskSendString.c
	@echo 'Building file: $<'
	@echo 'Executing target #9 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Sources/Tasks/TaskSendString.args" -MMD -MP -MF"$(@:%.o=%.d)" -o"Sources/Tasks/TaskSendString.o"
	@echo 'Finished building: $<'
	@echo ' '

Sources/Tasks/TaskSendString2.o: ../Sources/Tasks/TaskSendString2.c
	@echo 'Building file: $<'
	@echo 'Executing target #10 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Sources/Tasks/TaskSendString2.args" -MMD -MP -MF"$(@:%.o=%.d)" -o"Sources/Tasks/TaskSendString2.o"
	@echo 'Finished building: $<'
	@echo ' '


