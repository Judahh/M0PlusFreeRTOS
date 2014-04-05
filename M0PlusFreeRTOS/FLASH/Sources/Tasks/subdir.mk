################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../../makefile.local

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS_QUOTED += \
"../Sources/Tasks/TaskAccelerometer.c" \
"../Sources/Tasks/TaskBlueLed.c" \
"../Sources/Tasks/TaskGreenLed.c" \
"../Sources/Tasks/TaskGyroscope.c" \
"../Sources/Tasks/TaskMotorDC.c" \
"../Sources/Tasks/TaskRedLed.c" \
"../Sources/Tasks/TaskRotateLed.c" \
"../Sources/Tasks/TaskSendGlobalVariable.c" \
"../Sources/Tasks/TaskSendString.c" \
"../Sources/Tasks/TaskSendString1.c" \
"../Sources/Tasks/TaskSendString2.c" \
"../Sources/Tasks/TaskSonar.c" \
"../Sources/Tasks/TaskWriteString.c" \

C_SRCS += \
../Sources/Tasks/TaskAccelerometer.c \
../Sources/Tasks/TaskBlueLed.c \
../Sources/Tasks/TaskGreenLed.c \
../Sources/Tasks/TaskGyroscope.c \
../Sources/Tasks/TaskMotorDC.c \
../Sources/Tasks/TaskRedLed.c \
../Sources/Tasks/TaskRotateLed.c \
../Sources/Tasks/TaskSendGlobalVariable.c \
../Sources/Tasks/TaskSendString.c \
../Sources/Tasks/TaskSendString1.c \
../Sources/Tasks/TaskSendString2.c \
../Sources/Tasks/TaskSonar.c \
../Sources/Tasks/TaskWriteString.c \

OBJS += \
./Sources/Tasks/TaskAccelerometer.o \
./Sources/Tasks/TaskBlueLed.o \
./Sources/Tasks/TaskGreenLed.o \
./Sources/Tasks/TaskGyroscope.o \
./Sources/Tasks/TaskMotorDC.o \
./Sources/Tasks/TaskRedLed.o \
./Sources/Tasks/TaskRotateLed.o \
./Sources/Tasks/TaskSendGlobalVariable.o \
./Sources/Tasks/TaskSendString.o \
./Sources/Tasks/TaskSendString1.o \
./Sources/Tasks/TaskSendString2.o \
./Sources/Tasks/TaskSonar.o \
./Sources/Tasks/TaskWriteString.o \

OBJS_QUOTED += \
"./Sources/Tasks/TaskAccelerometer.o" \
"./Sources/Tasks/TaskBlueLed.o" \
"./Sources/Tasks/TaskGreenLed.o" \
"./Sources/Tasks/TaskGyroscope.o" \
"./Sources/Tasks/TaskMotorDC.o" \
"./Sources/Tasks/TaskRedLed.o" \
"./Sources/Tasks/TaskRotateLed.o" \
"./Sources/Tasks/TaskSendGlobalVariable.o" \
"./Sources/Tasks/TaskSendString.o" \
"./Sources/Tasks/TaskSendString1.o" \
"./Sources/Tasks/TaskSendString2.o" \
"./Sources/Tasks/TaskSonar.o" \
"./Sources/Tasks/TaskWriteString.o" \

C_DEPS += \
./Sources/Tasks/TaskAccelerometer.d \
./Sources/Tasks/TaskBlueLed.d \
./Sources/Tasks/TaskGreenLed.d \
./Sources/Tasks/TaskGyroscope.d \
./Sources/Tasks/TaskMotorDC.d \
./Sources/Tasks/TaskRedLed.d \
./Sources/Tasks/TaskRotateLed.d \
./Sources/Tasks/TaskSendGlobalVariable.d \
./Sources/Tasks/TaskSendString.d \
./Sources/Tasks/TaskSendString1.d \
./Sources/Tasks/TaskSendString2.d \
./Sources/Tasks/TaskSonar.d \
./Sources/Tasks/TaskWriteString.d \

OBJS_OS_FORMAT += \
./Sources/Tasks/TaskAccelerometer.o \
./Sources/Tasks/TaskBlueLed.o \
./Sources/Tasks/TaskGreenLed.o \
./Sources/Tasks/TaskGyroscope.o \
./Sources/Tasks/TaskMotorDC.o \
./Sources/Tasks/TaskRedLed.o \
./Sources/Tasks/TaskRotateLed.o \
./Sources/Tasks/TaskSendGlobalVariable.o \
./Sources/Tasks/TaskSendString.o \
./Sources/Tasks/TaskSendString1.o \
./Sources/Tasks/TaskSendString2.o \
./Sources/Tasks/TaskSonar.o \
./Sources/Tasks/TaskWriteString.o \

C_DEPS_QUOTED += \
"./Sources/Tasks/TaskAccelerometer.d" \
"./Sources/Tasks/TaskBlueLed.d" \
"./Sources/Tasks/TaskGreenLed.d" \
"./Sources/Tasks/TaskGyroscope.d" \
"./Sources/Tasks/TaskMotorDC.d" \
"./Sources/Tasks/TaskRedLed.d" \
"./Sources/Tasks/TaskRotateLed.d" \
"./Sources/Tasks/TaskSendGlobalVariable.d" \
"./Sources/Tasks/TaskSendString.d" \
"./Sources/Tasks/TaskSendString1.d" \
"./Sources/Tasks/TaskSendString2.d" \
"./Sources/Tasks/TaskSonar.d" \
"./Sources/Tasks/TaskWriteString.d" \


# Each subdirectory must supply rules for building sources it contributes
Sources/Tasks/TaskAccelerometer.o: ../Sources/Tasks/TaskAccelerometer.c
	@echo 'Building file: $<'
	@echo 'Executing target #8 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Sources/Tasks/TaskAccelerometer.args" -MMD -MP -MF"$(@:%.o=%.d)" -o"Sources/Tasks/TaskAccelerometer.o"
	@echo 'Finished building: $<'
	@echo ' '

Sources/Tasks/TaskBlueLed.o: ../Sources/Tasks/TaskBlueLed.c
	@echo 'Building file: $<'
	@echo 'Executing target #9 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Sources/Tasks/TaskBlueLed.args" -MMD -MP -MF"$(@:%.o=%.d)" -o"Sources/Tasks/TaskBlueLed.o"
	@echo 'Finished building: $<'
	@echo ' '

Sources/Tasks/TaskGreenLed.o: ../Sources/Tasks/TaskGreenLed.c
	@echo 'Building file: $<'
	@echo 'Executing target #10 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Sources/Tasks/TaskGreenLed.args" -MMD -MP -MF"$(@:%.o=%.d)" -o"Sources/Tasks/TaskGreenLed.o"
	@echo 'Finished building: $<'
	@echo ' '

Sources/Tasks/TaskGyroscope.o: ../Sources/Tasks/TaskGyroscope.c
	@echo 'Building file: $<'
	@echo 'Executing target #11 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Sources/Tasks/TaskGyroscope.args" -MMD -MP -MF"$(@:%.o=%.d)" -o"Sources/Tasks/TaskGyroscope.o"
	@echo 'Finished building: $<'
	@echo ' '

Sources/Tasks/TaskMotorDC.o: ../Sources/Tasks/TaskMotorDC.c
	@echo 'Building file: $<'
	@echo 'Executing target #12 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Sources/Tasks/TaskMotorDC.args" -MMD -MP -MF"$(@:%.o=%.d)" -o"Sources/Tasks/TaskMotorDC.o"
	@echo 'Finished building: $<'
	@echo ' '

Sources/Tasks/TaskRedLed.o: ../Sources/Tasks/TaskRedLed.c
	@echo 'Building file: $<'
	@echo 'Executing target #13 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Sources/Tasks/TaskRedLed.args" -MMD -MP -MF"$(@:%.o=%.d)" -o"Sources/Tasks/TaskRedLed.o"
	@echo 'Finished building: $<'
	@echo ' '

Sources/Tasks/TaskRotateLed.o: ../Sources/Tasks/TaskRotateLed.c
	@echo 'Building file: $<'
	@echo 'Executing target #14 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Sources/Tasks/TaskRotateLed.args" -MMD -MP -MF"$(@:%.o=%.d)" -o"Sources/Tasks/TaskRotateLed.o"
	@echo 'Finished building: $<'
	@echo ' '

Sources/Tasks/TaskSendGlobalVariable.o: ../Sources/Tasks/TaskSendGlobalVariable.c
	@echo 'Building file: $<'
	@echo 'Executing target #15 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Sources/Tasks/TaskSendGlobalVariable.args" -MMD -MP -MF"$(@:%.o=%.d)" -o"Sources/Tasks/TaskSendGlobalVariable.o"
	@echo 'Finished building: $<'
	@echo ' '

Sources/Tasks/TaskSendString.o: ../Sources/Tasks/TaskSendString.c
	@echo 'Building file: $<'
	@echo 'Executing target #16 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Sources/Tasks/TaskSendString.args" -MMD -MP -MF"$(@:%.o=%.d)" -o"Sources/Tasks/TaskSendString.o"
	@echo 'Finished building: $<'
	@echo ' '

Sources/Tasks/TaskSendString1.o: ../Sources/Tasks/TaskSendString1.c
	@echo 'Building file: $<'
	@echo 'Executing target #17 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Sources/Tasks/TaskSendString1.args" -MMD -MP -MF"$(@:%.o=%.d)" -o"Sources/Tasks/TaskSendString1.o"
	@echo 'Finished building: $<'
	@echo ' '

Sources/Tasks/TaskSendString2.o: ../Sources/Tasks/TaskSendString2.c
	@echo 'Building file: $<'
	@echo 'Executing target #18 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Sources/Tasks/TaskSendString2.args" -MMD -MP -MF"$(@:%.o=%.d)" -o"Sources/Tasks/TaskSendString2.o"
	@echo 'Finished building: $<'
	@echo ' '

Sources/Tasks/TaskSonar.o: ../Sources/Tasks/TaskSonar.c
	@echo 'Building file: $<'
	@echo 'Executing target #19 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Sources/Tasks/TaskSonar.args" -MMD -MP -MF"$(@:%.o=%.d)" -o"Sources/Tasks/TaskSonar.o"
	@echo 'Finished building: $<'
	@echo ' '

Sources/Tasks/TaskWriteString.o: ../Sources/Tasks/TaskWriteString.c
	@echo 'Building file: $<'
	@echo 'Executing target #20 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Sources/Tasks/TaskWriteString.args" -MMD -MP -MF"$(@:%.o=%.d)" -o"Sources/Tasks/TaskWriteString.o"
	@echo 'Finished building: $<'
	@echo ' '


