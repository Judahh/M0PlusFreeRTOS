################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.local

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS_QUOTED += \
"../Generated_Code/Cpu.c" \
"../Generated_Code/CsIO0.c" \
"../Generated_Code/FreeRTOS0.c" \
"../Generated_Code/GI2C0.c" \
"../Generated_Code/I2C0.c" \
"../Generated_Code/I2C1.c" \
"../Generated_Code/IO1.c" \
"../Generated_Code/MMA0.c" \
"../Generated_Code/PE_LDD.c" \
"../Generated_Code/PWMBuzzer.c" \
"../Generated_Code/PWMLEDBlue.c" \
"../Generated_Code/PWMLEDGreen.c" \
"../Generated_Code/PWMLEDRed.c" \
"../Generated_Code/PwmLdd1.c" \
"../Generated_Code/PwmLdd2.c" \
"../Generated_Code/PwmLdd3.c" \
"../Generated_Code/PwmLdd4.c" \
"../Generated_Code/TSSTouch.c" \
"../Generated_Code/TU0.c" \
"../Generated_Code/TU1.c" \
"../Generated_Code/TU2.c" \
"../Generated_Code/UTIL0.c" \
"../Generated_Code/UTIL1.c" \
"../Generated_Code/Vectors.c" \
"../Generated_Code/WAIT0.c" \
"../Generated_Code/croutine.c" \
"../Generated_Code/heap_1.c" \
"../Generated_Code/heap_2.c" \
"../Generated_Code/heap_3.c" \
"../Generated_Code/heap_4.c" \
"../Generated_Code/list.c" \
"../Generated_Code/port.c" \
"../Generated_Code/queue.c" \
"../Generated_Code/tasks.c" \
"../Generated_Code/timers.c" \

C_SRCS += \
../Generated_Code/Cpu.c \
../Generated_Code/CsIO0.c \
../Generated_Code/FreeRTOS0.c \
../Generated_Code/GI2C0.c \
../Generated_Code/I2C0.c \
../Generated_Code/I2C1.c \
../Generated_Code/IO1.c \
../Generated_Code/MMA0.c \
../Generated_Code/PE_LDD.c \
../Generated_Code/PWMBuzzer.c \
../Generated_Code/PWMLEDBlue.c \
../Generated_Code/PWMLEDGreen.c \
../Generated_Code/PWMLEDRed.c \
../Generated_Code/PwmLdd1.c \
../Generated_Code/PwmLdd2.c \
../Generated_Code/PwmLdd3.c \
../Generated_Code/PwmLdd4.c \
../Generated_Code/TSSTouch.c \
../Generated_Code/TU0.c \
../Generated_Code/TU1.c \
../Generated_Code/TU2.c \
../Generated_Code/UTIL0.c \
../Generated_Code/UTIL1.c \
../Generated_Code/Vectors.c \
../Generated_Code/WAIT0.c \
../Generated_Code/croutine.c \
../Generated_Code/heap_1.c \
../Generated_Code/heap_2.c \
../Generated_Code/heap_3.c \
../Generated_Code/heap_4.c \
../Generated_Code/list.c \
../Generated_Code/port.c \
../Generated_Code/queue.c \
../Generated_Code/tasks.c \
../Generated_Code/timers.c \

S_SRCS += \
../Generated_Code/portasm.s \

S_SRCS_QUOTED += \
"../Generated_Code/portasm.s" \

S_DEPS_QUOTED += \
"./Generated_Code/portasm.d" \

OBJS += \
./Generated_Code/Cpu.o \
./Generated_Code/CsIO0.o \
./Generated_Code/FreeRTOS0.o \
./Generated_Code/GI2C0.o \
./Generated_Code/I2C0.o \
./Generated_Code/I2C1.o \
./Generated_Code/IO1.o \
./Generated_Code/MMA0.o \
./Generated_Code/PE_LDD.o \
./Generated_Code/PWMBuzzer.o \
./Generated_Code/PWMLEDBlue.o \
./Generated_Code/PWMLEDGreen.o \
./Generated_Code/PWMLEDRed.o \
./Generated_Code/PwmLdd1.o \
./Generated_Code/PwmLdd2.o \
./Generated_Code/PwmLdd3.o \
./Generated_Code/PwmLdd4.o \
./Generated_Code/TSSTouch.o \
./Generated_Code/TU0.o \
./Generated_Code/TU1.o \
./Generated_Code/TU2.o \
./Generated_Code/UTIL0.o \
./Generated_Code/UTIL1.o \
./Generated_Code/Vectors.o \
./Generated_Code/WAIT0.o \
./Generated_Code/croutine.o \
./Generated_Code/heap_1.o \
./Generated_Code/heap_2.o \
./Generated_Code/heap_3.o \
./Generated_Code/heap_4.o \
./Generated_Code/list.o \
./Generated_Code/port.o \
./Generated_Code/portasm.o \
./Generated_Code/queue.o \
./Generated_Code/tasks.o \
./Generated_Code/timers.o \

S_DEPS += \
./Generated_Code/portasm.d \

OBJS_QUOTED += \
"./Generated_Code/Cpu.o" \
"./Generated_Code/CsIO0.o" \
"./Generated_Code/FreeRTOS0.o" \
"./Generated_Code/GI2C0.o" \
"./Generated_Code/I2C0.o" \
"./Generated_Code/I2C1.o" \
"./Generated_Code/IO1.o" \
"./Generated_Code/MMA0.o" \
"./Generated_Code/PE_LDD.o" \
"./Generated_Code/PWMBuzzer.o" \
"./Generated_Code/PWMLEDBlue.o" \
"./Generated_Code/PWMLEDGreen.o" \
"./Generated_Code/PWMLEDRed.o" \
"./Generated_Code/PwmLdd1.o" \
"./Generated_Code/PwmLdd2.o" \
"./Generated_Code/PwmLdd3.o" \
"./Generated_Code/PwmLdd4.o" \
"./Generated_Code/TSSTouch.o" \
"./Generated_Code/TU0.o" \
"./Generated_Code/TU1.o" \
"./Generated_Code/TU2.o" \
"./Generated_Code/UTIL0.o" \
"./Generated_Code/UTIL1.o" \
"./Generated_Code/Vectors.o" \
"./Generated_Code/WAIT0.o" \
"./Generated_Code/croutine.o" \
"./Generated_Code/heap_1.o" \
"./Generated_Code/heap_2.o" \
"./Generated_Code/heap_3.o" \
"./Generated_Code/heap_4.o" \
"./Generated_Code/list.o" \
"./Generated_Code/port.o" \
"./Generated_Code/portasm.o" \
"./Generated_Code/queue.o" \
"./Generated_Code/tasks.o" \
"./Generated_Code/timers.o" \

C_DEPS += \
./Generated_Code/Cpu.d \
./Generated_Code/CsIO0.d \
./Generated_Code/FreeRTOS0.d \
./Generated_Code/GI2C0.d \
./Generated_Code/I2C0.d \
./Generated_Code/I2C1.d \
./Generated_Code/IO1.d \
./Generated_Code/MMA0.d \
./Generated_Code/PE_LDD.d \
./Generated_Code/PWMBuzzer.d \
./Generated_Code/PWMLEDBlue.d \
./Generated_Code/PWMLEDGreen.d \
./Generated_Code/PWMLEDRed.d \
./Generated_Code/PwmLdd1.d \
./Generated_Code/PwmLdd2.d \
./Generated_Code/PwmLdd3.d \
./Generated_Code/PwmLdd4.d \
./Generated_Code/TSSTouch.d \
./Generated_Code/TU0.d \
./Generated_Code/TU1.d \
./Generated_Code/TU2.d \
./Generated_Code/UTIL0.d \
./Generated_Code/UTIL1.d \
./Generated_Code/Vectors.d \
./Generated_Code/WAIT0.d \
./Generated_Code/croutine.d \
./Generated_Code/heap_1.d \
./Generated_Code/heap_2.d \
./Generated_Code/heap_3.d \
./Generated_Code/heap_4.d \
./Generated_Code/list.d \
./Generated_Code/port.d \
./Generated_Code/queue.d \
./Generated_Code/tasks.d \
./Generated_Code/timers.d \

OBJS_OS_FORMAT += \
./Generated_Code/Cpu.o \
./Generated_Code/CsIO0.o \
./Generated_Code/FreeRTOS0.o \
./Generated_Code/GI2C0.o \
./Generated_Code/I2C0.o \
./Generated_Code/I2C1.o \
./Generated_Code/IO1.o \
./Generated_Code/MMA0.o \
./Generated_Code/PE_LDD.o \
./Generated_Code/PWMBuzzer.o \
./Generated_Code/PWMLEDBlue.o \
./Generated_Code/PWMLEDGreen.o \
./Generated_Code/PWMLEDRed.o \
./Generated_Code/PwmLdd1.o \
./Generated_Code/PwmLdd2.o \
./Generated_Code/PwmLdd3.o \
./Generated_Code/PwmLdd4.o \
./Generated_Code/TSSTouch.o \
./Generated_Code/TU0.o \
./Generated_Code/TU1.o \
./Generated_Code/TU2.o \
./Generated_Code/UTIL0.o \
./Generated_Code/UTIL1.o \
./Generated_Code/Vectors.o \
./Generated_Code/WAIT0.o \
./Generated_Code/croutine.o \
./Generated_Code/heap_1.o \
./Generated_Code/heap_2.o \
./Generated_Code/heap_3.o \
./Generated_Code/heap_4.o \
./Generated_Code/list.o \
./Generated_Code/port.o \
./Generated_Code/portasm.o \
./Generated_Code/queue.o \
./Generated_Code/tasks.o \
./Generated_Code/timers.o \

C_DEPS_QUOTED += \
"./Generated_Code/Cpu.d" \
"./Generated_Code/CsIO0.d" \
"./Generated_Code/FreeRTOS0.d" \
"./Generated_Code/GI2C0.d" \
"./Generated_Code/I2C0.d" \
"./Generated_Code/I2C1.d" \
"./Generated_Code/IO1.d" \
"./Generated_Code/MMA0.d" \
"./Generated_Code/PE_LDD.d" \
"./Generated_Code/PWMBuzzer.d" \
"./Generated_Code/PWMLEDBlue.d" \
"./Generated_Code/PWMLEDGreen.d" \
"./Generated_Code/PWMLEDRed.d" \
"./Generated_Code/PwmLdd1.d" \
"./Generated_Code/PwmLdd2.d" \
"./Generated_Code/PwmLdd3.d" \
"./Generated_Code/PwmLdd4.d" \
"./Generated_Code/TSSTouch.d" \
"./Generated_Code/TU0.d" \
"./Generated_Code/TU1.d" \
"./Generated_Code/TU2.d" \
"./Generated_Code/UTIL0.d" \
"./Generated_Code/UTIL1.d" \
"./Generated_Code/Vectors.d" \
"./Generated_Code/WAIT0.d" \
"./Generated_Code/croutine.d" \
"./Generated_Code/heap_1.d" \
"./Generated_Code/heap_2.d" \
"./Generated_Code/heap_3.d" \
"./Generated_Code/heap_4.d" \
"./Generated_Code/list.d" \
"./Generated_Code/port.d" \
"./Generated_Code/queue.d" \
"./Generated_Code/tasks.d" \
"./Generated_Code/timers.d" \


# Each subdirectory must supply rules for building sources it contributes
Generated_Code/Cpu.o: ../Generated_Code/Cpu.c
	@echo 'Building file: $<'
	@echo 'Executing target #29 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Generated_Code/Cpu.args" -MMD -MP -MF"$(@:%.o=%.d)" -o"Generated_Code/Cpu.o"
	@echo 'Finished building: $<'
	@echo ' '

Generated_Code/CsIO0.o: ../Generated_Code/CsIO0.c
	@echo 'Building file: $<'
	@echo 'Executing target #30 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Generated_Code/CsIO0.args" -MMD -MP -MF"$(@:%.o=%.d)" -o"Generated_Code/CsIO0.o"
	@echo 'Finished building: $<'
	@echo ' '

Generated_Code/FreeRTOS0.o: ../Generated_Code/FreeRTOS0.c
	@echo 'Building file: $<'
	@echo 'Executing target #31 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Generated_Code/FreeRTOS0.args" -MMD -MP -MF"$(@:%.o=%.d)" -o"Generated_Code/FreeRTOS0.o"
	@echo 'Finished building: $<'
	@echo ' '

Generated_Code/GI2C0.o: ../Generated_Code/GI2C0.c
	@echo 'Building file: $<'
	@echo 'Executing target #32 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Generated_Code/GI2C0.args" -MMD -MP -MF"$(@:%.o=%.d)" -o"Generated_Code/GI2C0.o"
	@echo 'Finished building: $<'
	@echo ' '

Generated_Code/I2C0.o: ../Generated_Code/I2C0.c
	@echo 'Building file: $<'
	@echo 'Executing target #33 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Generated_Code/I2C0.args" -MMD -MP -MF"$(@:%.o=%.d)" -o"Generated_Code/I2C0.o"
	@echo 'Finished building: $<'
	@echo ' '

Generated_Code/I2C1.o: ../Generated_Code/I2C1.c
	@echo 'Building file: $<'
	@echo 'Executing target #34 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Generated_Code/I2C1.args" -MMD -MP -MF"$(@:%.o=%.d)" -o"Generated_Code/I2C1.o"
	@echo 'Finished building: $<'
	@echo ' '

Generated_Code/IO1.o: ../Generated_Code/IO1.c
	@echo 'Building file: $<'
	@echo 'Executing target #35 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Generated_Code/IO1.args" -MMD -MP -MF"$(@:%.o=%.d)" -o"Generated_Code/IO1.o"
	@echo 'Finished building: $<'
	@echo ' '

Generated_Code/MMA0.o: ../Generated_Code/MMA0.c
	@echo 'Building file: $<'
	@echo 'Executing target #36 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Generated_Code/MMA0.args" -MMD -MP -MF"$(@:%.o=%.d)" -o"Generated_Code/MMA0.o"
	@echo 'Finished building: $<'
	@echo ' '

Generated_Code/PE_LDD.o: ../Generated_Code/PE_LDD.c
	@echo 'Building file: $<'
	@echo 'Executing target #37 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Generated_Code/PE_LDD.args" -MMD -MP -MF"$(@:%.o=%.d)" -o"Generated_Code/PE_LDD.o"
	@echo 'Finished building: $<'
	@echo ' '

Generated_Code/PWMBuzzer.o: ../Generated_Code/PWMBuzzer.c
	@echo 'Building file: $<'
	@echo 'Executing target #38 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Generated_Code/PWMBuzzer.args" -MMD -MP -MF"$(@:%.o=%.d)" -o"Generated_Code/PWMBuzzer.o"
	@echo 'Finished building: $<'
	@echo ' '

Generated_Code/PWMLEDBlue.o: ../Generated_Code/PWMLEDBlue.c
	@echo 'Building file: $<'
	@echo 'Executing target #39 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Generated_Code/PWMLEDBlue.args" -MMD -MP -MF"$(@:%.o=%.d)" -o"Generated_Code/PWMLEDBlue.o"
	@echo 'Finished building: $<'
	@echo ' '

Generated_Code/PWMLEDGreen.o: ../Generated_Code/PWMLEDGreen.c
	@echo 'Building file: $<'
	@echo 'Executing target #40 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Generated_Code/PWMLEDGreen.args" -MMD -MP -MF"$(@:%.o=%.d)" -o"Generated_Code/PWMLEDGreen.o"
	@echo 'Finished building: $<'
	@echo ' '

Generated_Code/PWMLEDRed.o: ../Generated_Code/PWMLEDRed.c
	@echo 'Building file: $<'
	@echo 'Executing target #41 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Generated_Code/PWMLEDRed.args" -MMD -MP -MF"$(@:%.o=%.d)" -o"Generated_Code/PWMLEDRed.o"
	@echo 'Finished building: $<'
	@echo ' '

Generated_Code/PwmLdd1.o: ../Generated_Code/PwmLdd1.c
	@echo 'Building file: $<'
	@echo 'Executing target #42 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Generated_Code/PwmLdd1.args" -MMD -MP -MF"$(@:%.o=%.d)" -o"Generated_Code/PwmLdd1.o"
	@echo 'Finished building: $<'
	@echo ' '

Generated_Code/PwmLdd2.o: ../Generated_Code/PwmLdd2.c
	@echo 'Building file: $<'
	@echo 'Executing target #43 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Generated_Code/PwmLdd2.args" -MMD -MP -MF"$(@:%.o=%.d)" -o"Generated_Code/PwmLdd2.o"
	@echo 'Finished building: $<'
	@echo ' '

Generated_Code/PwmLdd3.o: ../Generated_Code/PwmLdd3.c
	@echo 'Building file: $<'
	@echo 'Executing target #44 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Generated_Code/PwmLdd3.args" -MMD -MP -MF"$(@:%.o=%.d)" -o"Generated_Code/PwmLdd3.o"
	@echo 'Finished building: $<'
	@echo ' '

Generated_Code/PwmLdd4.o: ../Generated_Code/PwmLdd4.c
	@echo 'Building file: $<'
	@echo 'Executing target #45 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Generated_Code/PwmLdd4.args" -MMD -MP -MF"$(@:%.o=%.d)" -o"Generated_Code/PwmLdd4.o"
	@echo 'Finished building: $<'
	@echo ' '

Generated_Code/TSSTouch.o: ../Generated_Code/TSSTouch.c
	@echo 'Building file: $<'
	@echo 'Executing target #46 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Generated_Code/TSSTouch.args" -MMD -MP -MF"$(@:%.o=%.d)" -o"Generated_Code/TSSTouch.o"
	@echo 'Finished building: $<'
	@echo ' '

Generated_Code/TU0.o: ../Generated_Code/TU0.c
	@echo 'Building file: $<'
	@echo 'Executing target #47 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Generated_Code/TU0.args" -MMD -MP -MF"$(@:%.o=%.d)" -o"Generated_Code/TU0.o"
	@echo 'Finished building: $<'
	@echo ' '

Generated_Code/TU1.o: ../Generated_Code/TU1.c
	@echo 'Building file: $<'
	@echo 'Executing target #48 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Generated_Code/TU1.args" -MMD -MP -MF"$(@:%.o=%.d)" -o"Generated_Code/TU1.o"
	@echo 'Finished building: $<'
	@echo ' '

Generated_Code/TU2.o: ../Generated_Code/TU2.c
	@echo 'Building file: $<'
	@echo 'Executing target #49 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Generated_Code/TU2.args" -MMD -MP -MF"$(@:%.o=%.d)" -o"Generated_Code/TU2.o"
	@echo 'Finished building: $<'
	@echo ' '

Generated_Code/UTIL0.o: ../Generated_Code/UTIL0.c
	@echo 'Building file: $<'
	@echo 'Executing target #50 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Generated_Code/UTIL0.args" -MMD -MP -MF"$(@:%.o=%.d)" -o"Generated_Code/UTIL0.o"
	@echo 'Finished building: $<'
	@echo ' '

Generated_Code/UTIL1.o: ../Generated_Code/UTIL1.c
	@echo 'Building file: $<'
	@echo 'Executing target #51 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Generated_Code/UTIL1.args" -MMD -MP -MF"$(@:%.o=%.d)" -o"Generated_Code/UTIL1.o"
	@echo 'Finished building: $<'
	@echo ' '

Generated_Code/Vectors.o: ../Generated_Code/Vectors.c
	@echo 'Building file: $<'
	@echo 'Executing target #52 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Generated_Code/Vectors.args" -MMD -MP -MF"$(@:%.o=%.d)" -o"Generated_Code/Vectors.o"
	@echo 'Finished building: $<'
	@echo ' '

Generated_Code/WAIT0.o: ../Generated_Code/WAIT0.c
	@echo 'Building file: $<'
	@echo 'Executing target #53 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Generated_Code/WAIT0.args" -MMD -MP -MF"$(@:%.o=%.d)" -o"Generated_Code/WAIT0.o"
	@echo 'Finished building: $<'
	@echo ' '

Generated_Code/croutine.o: ../Generated_Code/croutine.c
	@echo 'Building file: $<'
	@echo 'Executing target #54 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Generated_Code/croutine.args" -MMD -MP -MF"$(@:%.o=%.d)" -o"Generated_Code/croutine.o"
	@echo 'Finished building: $<'
	@echo ' '

Generated_Code/heap_1.o: ../Generated_Code/heap_1.c
	@echo 'Building file: $<'
	@echo 'Executing target #55 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Generated_Code/heap_1.args" -MMD -MP -MF"$(@:%.o=%.d)" -o"Generated_Code/heap_1.o"
	@echo 'Finished building: $<'
	@echo ' '

Generated_Code/heap_2.o: ../Generated_Code/heap_2.c
	@echo 'Building file: $<'
	@echo 'Executing target #56 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Generated_Code/heap_2.args" -MMD -MP -MF"$(@:%.o=%.d)" -o"Generated_Code/heap_2.o"
	@echo 'Finished building: $<'
	@echo ' '

Generated_Code/heap_3.o: ../Generated_Code/heap_3.c
	@echo 'Building file: $<'
	@echo 'Executing target #57 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Generated_Code/heap_3.args" -MMD -MP -MF"$(@:%.o=%.d)" -o"Generated_Code/heap_3.o"
	@echo 'Finished building: $<'
	@echo ' '

Generated_Code/heap_4.o: ../Generated_Code/heap_4.c
	@echo 'Building file: $<'
	@echo 'Executing target #58 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Generated_Code/heap_4.args" -MMD -MP -MF"$(@:%.o=%.d)" -o"Generated_Code/heap_4.o"
	@echo 'Finished building: $<'
	@echo ' '

Generated_Code/list.o: ../Generated_Code/list.c
	@echo 'Building file: $<'
	@echo 'Executing target #59 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Generated_Code/list.args" -MMD -MP -MF"$(@:%.o=%.d)" -o"Generated_Code/list.o"
	@echo 'Finished building: $<'
	@echo ' '

Generated_Code/port.o: ../Generated_Code/port.c
	@echo 'Building file: $<'
	@echo 'Executing target #60 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Generated_Code/port.args" -MMD -MP -MF"$(@:%.o=%.d)" -o"Generated_Code/port.o"
	@echo 'Finished building: $<'
	@echo ' '

Generated_Code/portasm.o: ../Generated_Code/portasm.s
	@echo 'Building file: $<'
	@echo 'Executing target #61 $<'
	@echo 'Invoking: ARM Ltd Windows GCC Assembler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Generated_Code/portasm.args" -MMD -MP -MF"$(@:%.o=%.d)" -o"Generated_Code/portasm.o"
	@echo 'Finished building: $<'
	@echo ' '

Generated_Code/queue.o: ../Generated_Code/queue.c
	@echo 'Building file: $<'
	@echo 'Executing target #62 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Generated_Code/queue.args" -MMD -MP -MF"$(@:%.o=%.d)" -o"Generated_Code/queue.o"
	@echo 'Finished building: $<'
	@echo ' '

Generated_Code/tasks.o: ../Generated_Code/tasks.c
	@echo 'Building file: $<'
	@echo 'Executing target #63 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Generated_Code/tasks.args" -MMD -MP -MF"$(@:%.o=%.d)" -o"Generated_Code/tasks.o"
	@echo 'Finished building: $<'
	@echo ' '

Generated_Code/timers.o: ../Generated_Code/timers.c
	@echo 'Building file: $<'
	@echo 'Executing target #64 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Generated_Code/timers.args" -MMD -MP -MF"$(@:%.o=%.d)" -o"Generated_Code/timers.o"
	@echo 'Finished building: $<'
	@echo ' '


