################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.local

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS_QUOTED += \
"../Generated_Code/BitIoLdd1.c" \
"../Generated_Code/BitIoLdd2.c" \
"../Generated_Code/BitIoLdd3.c" \
"../Generated_Code/BitIoLdd4.c" \
"../Generated_Code/Buzzer.c" \
"../Generated_Code/Cpu.c" \
"../Generated_Code/CsIO0.c" \
"../Generated_Code/FreeRTOS0.c" \
"../Generated_Code/GI2C0.c" \
"../Generated_Code/I2C0.c" \
"../Generated_Code/I2C1.c" \
"../Generated_Code/IO1.c" \
"../Generated_Code/LEDBlue.c" \
"../Generated_Code/LEDGreen.c" \
"../Generated_Code/LEDRed.c" \
"../Generated_Code/LEDpin1.c" \
"../Generated_Code/LEDpin2.c" \
"../Generated_Code/LEDpin3.c" \
"../Generated_Code/MMA0.c" \
"../Generated_Code/PE_LDD.c" \
"../Generated_Code/TU0.c" \
"../Generated_Code/UTIL0.c" \
"../Generated_Code/UTIL1.c" \
"../Generated_Code/Vectors.c" \
"../Generated_Code/WAIT0.c" \
"../Generated_Code/croutine.c" \
"../Generated_Code/event_groups.c" \
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
../Generated_Code/BitIoLdd1.c \
../Generated_Code/BitIoLdd2.c \
../Generated_Code/BitIoLdd3.c \
../Generated_Code/BitIoLdd4.c \
../Generated_Code/Buzzer.c \
../Generated_Code/Cpu.c \
../Generated_Code/CsIO0.c \
../Generated_Code/FreeRTOS0.c \
../Generated_Code/GI2C0.c \
../Generated_Code/I2C0.c \
../Generated_Code/I2C1.c \
../Generated_Code/IO1.c \
../Generated_Code/LEDBlue.c \
../Generated_Code/LEDGreen.c \
../Generated_Code/LEDRed.c \
../Generated_Code/LEDpin1.c \
../Generated_Code/LEDpin2.c \
../Generated_Code/LEDpin3.c \
../Generated_Code/MMA0.c \
../Generated_Code/PE_LDD.c \
../Generated_Code/TU0.c \
../Generated_Code/UTIL0.c \
../Generated_Code/UTIL1.c \
../Generated_Code/Vectors.c \
../Generated_Code/WAIT0.c \
../Generated_Code/croutine.c \
../Generated_Code/event_groups.c \
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
./Generated_Code/BitIoLdd1.o \
./Generated_Code/BitIoLdd2.o \
./Generated_Code/BitIoLdd3.o \
./Generated_Code/BitIoLdd4.o \
./Generated_Code/Buzzer.o \
./Generated_Code/Cpu.o \
./Generated_Code/CsIO0.o \
./Generated_Code/FreeRTOS0.o \
./Generated_Code/GI2C0.o \
./Generated_Code/I2C0.o \
./Generated_Code/I2C1.o \
./Generated_Code/IO1.o \
./Generated_Code/LEDBlue.o \
./Generated_Code/LEDGreen.o \
./Generated_Code/LEDRed.o \
./Generated_Code/LEDpin1.o \
./Generated_Code/LEDpin2.o \
./Generated_Code/LEDpin3.o \
./Generated_Code/MMA0.o \
./Generated_Code/PE_LDD.o \
./Generated_Code/TU0.o \
./Generated_Code/UTIL0.o \
./Generated_Code/UTIL1.o \
./Generated_Code/Vectors.o \
./Generated_Code/WAIT0.o \
./Generated_Code/croutine.o \
./Generated_Code/event_groups.o \
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
"./Generated_Code/BitIoLdd1.o" \
"./Generated_Code/BitIoLdd2.o" \
"./Generated_Code/BitIoLdd3.o" \
"./Generated_Code/BitIoLdd4.o" \
"./Generated_Code/Buzzer.o" \
"./Generated_Code/Cpu.o" \
"./Generated_Code/CsIO0.o" \
"./Generated_Code/FreeRTOS0.o" \
"./Generated_Code/GI2C0.o" \
"./Generated_Code/I2C0.o" \
"./Generated_Code/I2C1.o" \
"./Generated_Code/IO1.o" \
"./Generated_Code/LEDBlue.o" \
"./Generated_Code/LEDGreen.o" \
"./Generated_Code/LEDRed.o" \
"./Generated_Code/LEDpin1.o" \
"./Generated_Code/LEDpin2.o" \
"./Generated_Code/LEDpin3.o" \
"./Generated_Code/MMA0.o" \
"./Generated_Code/PE_LDD.o" \
"./Generated_Code/TU0.o" \
"./Generated_Code/UTIL0.o" \
"./Generated_Code/UTIL1.o" \
"./Generated_Code/Vectors.o" \
"./Generated_Code/WAIT0.o" \
"./Generated_Code/croutine.o" \
"./Generated_Code/event_groups.o" \
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
./Generated_Code/BitIoLdd1.d \
./Generated_Code/BitIoLdd2.d \
./Generated_Code/BitIoLdd3.d \
./Generated_Code/BitIoLdd4.d \
./Generated_Code/Buzzer.d \
./Generated_Code/Cpu.d \
./Generated_Code/CsIO0.d \
./Generated_Code/FreeRTOS0.d \
./Generated_Code/GI2C0.d \
./Generated_Code/I2C0.d \
./Generated_Code/I2C1.d \
./Generated_Code/IO1.d \
./Generated_Code/LEDBlue.d \
./Generated_Code/LEDGreen.d \
./Generated_Code/LEDRed.d \
./Generated_Code/LEDpin1.d \
./Generated_Code/LEDpin2.d \
./Generated_Code/LEDpin3.d \
./Generated_Code/MMA0.d \
./Generated_Code/PE_LDD.d \
./Generated_Code/TU0.d \
./Generated_Code/UTIL0.d \
./Generated_Code/UTIL1.d \
./Generated_Code/Vectors.d \
./Generated_Code/WAIT0.d \
./Generated_Code/croutine.d \
./Generated_Code/event_groups.d \
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
./Generated_Code/BitIoLdd1.o \
./Generated_Code/BitIoLdd2.o \
./Generated_Code/BitIoLdd3.o \
./Generated_Code/BitIoLdd4.o \
./Generated_Code/Buzzer.o \
./Generated_Code/Cpu.o \
./Generated_Code/CsIO0.o \
./Generated_Code/FreeRTOS0.o \
./Generated_Code/GI2C0.o \
./Generated_Code/I2C0.o \
./Generated_Code/I2C1.o \
./Generated_Code/IO1.o \
./Generated_Code/LEDBlue.o \
./Generated_Code/LEDGreen.o \
./Generated_Code/LEDRed.o \
./Generated_Code/LEDpin1.o \
./Generated_Code/LEDpin2.o \
./Generated_Code/LEDpin3.o \
./Generated_Code/MMA0.o \
./Generated_Code/PE_LDD.o \
./Generated_Code/TU0.o \
./Generated_Code/UTIL0.o \
./Generated_Code/UTIL1.o \
./Generated_Code/Vectors.o \
./Generated_Code/WAIT0.o \
./Generated_Code/croutine.o \
./Generated_Code/event_groups.o \
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
"./Generated_Code/BitIoLdd1.d" \
"./Generated_Code/BitIoLdd2.d" \
"./Generated_Code/BitIoLdd3.d" \
"./Generated_Code/BitIoLdd4.d" \
"./Generated_Code/Buzzer.d" \
"./Generated_Code/Cpu.d" \
"./Generated_Code/CsIO0.d" \
"./Generated_Code/FreeRTOS0.d" \
"./Generated_Code/GI2C0.d" \
"./Generated_Code/I2C0.d" \
"./Generated_Code/I2C1.d" \
"./Generated_Code/IO1.d" \
"./Generated_Code/LEDBlue.d" \
"./Generated_Code/LEDGreen.d" \
"./Generated_Code/LEDRed.d" \
"./Generated_Code/LEDpin1.d" \
"./Generated_Code/LEDpin2.d" \
"./Generated_Code/LEDpin3.d" \
"./Generated_Code/MMA0.d" \
"./Generated_Code/PE_LDD.d" \
"./Generated_Code/TU0.d" \
"./Generated_Code/UTIL0.d" \
"./Generated_Code/UTIL1.d" \
"./Generated_Code/Vectors.d" \
"./Generated_Code/WAIT0.d" \
"./Generated_Code/croutine.d" \
"./Generated_Code/event_groups.d" \
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
Generated_Code/BitIoLdd1.o: ../Generated_Code/BitIoLdd1.c
	@echo 'Building file: $<'
	@echo 'Executing target #12 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Generated_Code/BitIoLdd1.args" -MMD -MP -MF"$(@:%.o=%.d)" -o"Generated_Code/BitIoLdd1.o"
	@echo 'Finished building: $<'
	@echo ' '

Generated_Code/BitIoLdd2.o: ../Generated_Code/BitIoLdd2.c
	@echo 'Building file: $<'
	@echo 'Executing target #13 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Generated_Code/BitIoLdd2.args" -MMD -MP -MF"$(@:%.o=%.d)" -o"Generated_Code/BitIoLdd2.o"
	@echo 'Finished building: $<'
	@echo ' '

Generated_Code/BitIoLdd3.o: ../Generated_Code/BitIoLdd3.c
	@echo 'Building file: $<'
	@echo 'Executing target #14 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Generated_Code/BitIoLdd3.args" -MMD -MP -MF"$(@:%.o=%.d)" -o"Generated_Code/BitIoLdd3.o"
	@echo 'Finished building: $<'
	@echo ' '

Generated_Code/BitIoLdd4.o: ../Generated_Code/BitIoLdd4.c
	@echo 'Building file: $<'
	@echo 'Executing target #15 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Generated_Code/BitIoLdd4.args" -MMD -MP -MF"$(@:%.o=%.d)" -o"Generated_Code/BitIoLdd4.o"
	@echo 'Finished building: $<'
	@echo ' '

Generated_Code/Buzzer.o: ../Generated_Code/Buzzer.c
	@echo 'Building file: $<'
	@echo 'Executing target #16 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Generated_Code/Buzzer.args" -MMD -MP -MF"$(@:%.o=%.d)" -o"Generated_Code/Buzzer.o"
	@echo 'Finished building: $<'
	@echo ' '

Generated_Code/Cpu.o: ../Generated_Code/Cpu.c
	@echo 'Building file: $<'
	@echo 'Executing target #17 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Generated_Code/Cpu.args" -MMD -MP -MF"$(@:%.o=%.d)" -o"Generated_Code/Cpu.o"
	@echo 'Finished building: $<'
	@echo ' '

Generated_Code/CsIO0.o: ../Generated_Code/CsIO0.c
	@echo 'Building file: $<'
	@echo 'Executing target #18 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Generated_Code/CsIO0.args" -MMD -MP -MF"$(@:%.o=%.d)" -o"Generated_Code/CsIO0.o"
	@echo 'Finished building: $<'
	@echo ' '

Generated_Code/FreeRTOS0.o: ../Generated_Code/FreeRTOS0.c
	@echo 'Building file: $<'
	@echo 'Executing target #19 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Generated_Code/FreeRTOS0.args" -MMD -MP -MF"$(@:%.o=%.d)" -o"Generated_Code/FreeRTOS0.o"
	@echo 'Finished building: $<'
	@echo ' '

Generated_Code/GI2C0.o: ../Generated_Code/GI2C0.c
	@echo 'Building file: $<'
	@echo 'Executing target #20 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Generated_Code/GI2C0.args" -MMD -MP -MF"$(@:%.o=%.d)" -o"Generated_Code/GI2C0.o"
	@echo 'Finished building: $<'
	@echo ' '

Generated_Code/I2C0.o: ../Generated_Code/I2C0.c
	@echo 'Building file: $<'
	@echo 'Executing target #21 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Generated_Code/I2C0.args" -MMD -MP -MF"$(@:%.o=%.d)" -o"Generated_Code/I2C0.o"
	@echo 'Finished building: $<'
	@echo ' '

Generated_Code/I2C1.o: ../Generated_Code/I2C1.c
	@echo 'Building file: $<'
	@echo 'Executing target #22 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Generated_Code/I2C1.args" -MMD -MP -MF"$(@:%.o=%.d)" -o"Generated_Code/I2C1.o"
	@echo 'Finished building: $<'
	@echo ' '

Generated_Code/IO1.o: ../Generated_Code/IO1.c
	@echo 'Building file: $<'
	@echo 'Executing target #23 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Generated_Code/IO1.args" -MMD -MP -MF"$(@:%.o=%.d)" -o"Generated_Code/IO1.o"
	@echo 'Finished building: $<'
	@echo ' '

Generated_Code/LEDBlue.o: ../Generated_Code/LEDBlue.c
	@echo 'Building file: $<'
	@echo 'Executing target #24 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Generated_Code/LEDBlue.args" -MMD -MP -MF"$(@:%.o=%.d)" -o"Generated_Code/LEDBlue.o"
	@echo 'Finished building: $<'
	@echo ' '

Generated_Code/LEDGreen.o: ../Generated_Code/LEDGreen.c
	@echo 'Building file: $<'
	@echo 'Executing target #25 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Generated_Code/LEDGreen.args" -MMD -MP -MF"$(@:%.o=%.d)" -o"Generated_Code/LEDGreen.o"
	@echo 'Finished building: $<'
	@echo ' '

Generated_Code/LEDRed.o: ../Generated_Code/LEDRed.c
	@echo 'Building file: $<'
	@echo 'Executing target #26 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Generated_Code/LEDRed.args" -MMD -MP -MF"$(@:%.o=%.d)" -o"Generated_Code/LEDRed.o"
	@echo 'Finished building: $<'
	@echo ' '

Generated_Code/LEDpin1.o: ../Generated_Code/LEDpin1.c
	@echo 'Building file: $<'
	@echo 'Executing target #27 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Generated_Code/LEDpin1.args" -MMD -MP -MF"$(@:%.o=%.d)" -o"Generated_Code/LEDpin1.o"
	@echo 'Finished building: $<'
	@echo ' '

Generated_Code/LEDpin2.o: ../Generated_Code/LEDpin2.c
	@echo 'Building file: $<'
	@echo 'Executing target #28 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Generated_Code/LEDpin2.args" -MMD -MP -MF"$(@:%.o=%.d)" -o"Generated_Code/LEDpin2.o"
	@echo 'Finished building: $<'
	@echo ' '

Generated_Code/LEDpin3.o: ../Generated_Code/LEDpin3.c
	@echo 'Building file: $<'
	@echo 'Executing target #29 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Generated_Code/LEDpin3.args" -MMD -MP -MF"$(@:%.o=%.d)" -o"Generated_Code/LEDpin3.o"
	@echo 'Finished building: $<'
	@echo ' '

Generated_Code/MMA0.o: ../Generated_Code/MMA0.c
	@echo 'Building file: $<'
	@echo 'Executing target #30 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Generated_Code/MMA0.args" -MMD -MP -MF"$(@:%.o=%.d)" -o"Generated_Code/MMA0.o"
	@echo 'Finished building: $<'
	@echo ' '

Generated_Code/PE_LDD.o: ../Generated_Code/PE_LDD.c
	@echo 'Building file: $<'
	@echo 'Executing target #31 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Generated_Code/PE_LDD.args" -MMD -MP -MF"$(@:%.o=%.d)" -o"Generated_Code/PE_LDD.o"
	@echo 'Finished building: $<'
	@echo ' '

Generated_Code/TU0.o: ../Generated_Code/TU0.c
	@echo 'Building file: $<'
	@echo 'Executing target #32 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Generated_Code/TU0.args" -MMD -MP -MF"$(@:%.o=%.d)" -o"Generated_Code/TU0.o"
	@echo 'Finished building: $<'
	@echo ' '

Generated_Code/UTIL0.o: ../Generated_Code/UTIL0.c
	@echo 'Building file: $<'
	@echo 'Executing target #33 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Generated_Code/UTIL0.args" -MMD -MP -MF"$(@:%.o=%.d)" -o"Generated_Code/UTIL0.o"
	@echo 'Finished building: $<'
	@echo ' '

Generated_Code/UTIL1.o: ../Generated_Code/UTIL1.c
	@echo 'Building file: $<'
	@echo 'Executing target #34 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Generated_Code/UTIL1.args" -MMD -MP -MF"$(@:%.o=%.d)" -o"Generated_Code/UTIL1.o"
	@echo 'Finished building: $<'
	@echo ' '

Generated_Code/Vectors.o: ../Generated_Code/Vectors.c
	@echo 'Building file: $<'
	@echo 'Executing target #35 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Generated_Code/Vectors.args" -MMD -MP -MF"$(@:%.o=%.d)" -o"Generated_Code/Vectors.o"
	@echo 'Finished building: $<'
	@echo ' '

Generated_Code/WAIT0.o: ../Generated_Code/WAIT0.c
	@echo 'Building file: $<'
	@echo 'Executing target #36 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Generated_Code/WAIT0.args" -MMD -MP -MF"$(@:%.o=%.d)" -o"Generated_Code/WAIT0.o"
	@echo 'Finished building: $<'
	@echo ' '

Generated_Code/croutine.o: ../Generated_Code/croutine.c
	@echo 'Building file: $<'
	@echo 'Executing target #37 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Generated_Code/croutine.args" -MMD -MP -MF"$(@:%.o=%.d)" -o"Generated_Code/croutine.o"
	@echo 'Finished building: $<'
	@echo ' '

Generated_Code/event_groups.o: ../Generated_Code/event_groups.c
	@echo 'Building file: $<'
	@echo 'Executing target #38 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Generated_Code/event_groups.args" -MMD -MP -MF"$(@:%.o=%.d)" -o"Generated_Code/event_groups.o"
	@echo 'Finished building: $<'
	@echo ' '

Generated_Code/heap_1.o: ../Generated_Code/heap_1.c
	@echo 'Building file: $<'
	@echo 'Executing target #39 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Generated_Code/heap_1.args" -MMD -MP -MF"$(@:%.o=%.d)" -o"Generated_Code/heap_1.o"
	@echo 'Finished building: $<'
	@echo ' '

Generated_Code/heap_2.o: ../Generated_Code/heap_2.c
	@echo 'Building file: $<'
	@echo 'Executing target #40 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Generated_Code/heap_2.args" -MMD -MP -MF"$(@:%.o=%.d)" -o"Generated_Code/heap_2.o"
	@echo 'Finished building: $<'
	@echo ' '

Generated_Code/heap_3.o: ../Generated_Code/heap_3.c
	@echo 'Building file: $<'
	@echo 'Executing target #41 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Generated_Code/heap_3.args" -MMD -MP -MF"$(@:%.o=%.d)" -o"Generated_Code/heap_3.o"
	@echo 'Finished building: $<'
	@echo ' '

Generated_Code/heap_4.o: ../Generated_Code/heap_4.c
	@echo 'Building file: $<'
	@echo 'Executing target #42 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Generated_Code/heap_4.args" -MMD -MP -MF"$(@:%.o=%.d)" -o"Generated_Code/heap_4.o"
	@echo 'Finished building: $<'
	@echo ' '

Generated_Code/list.o: ../Generated_Code/list.c
	@echo 'Building file: $<'
	@echo 'Executing target #43 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Generated_Code/list.args" -MMD -MP -MF"$(@:%.o=%.d)" -o"Generated_Code/list.o"
	@echo 'Finished building: $<'
	@echo ' '

Generated_Code/port.o: ../Generated_Code/port.c
	@echo 'Building file: $<'
	@echo 'Executing target #44 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Generated_Code/port.args" -MMD -MP -MF"$(@:%.o=%.d)" -o"Generated_Code/port.o"
	@echo 'Finished building: $<'
	@echo ' '

Generated_Code/portasm.o: ../Generated_Code/portasm.s
	@echo 'Building file: $<'
	@echo 'Executing target #45 $<'
	@echo 'Invoking: ARM Ltd Windows GCC Assembler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Generated_Code/portasm.args" -MMD -MP -MF"$(@:%.o=%.d)" -o"Generated_Code/portasm.o"
	@echo 'Finished building: $<'
	@echo ' '

Generated_Code/queue.o: ../Generated_Code/queue.c
	@echo 'Building file: $<'
	@echo 'Executing target #46 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Generated_Code/queue.args" -MMD -MP -MF"$(@:%.o=%.d)" -o"Generated_Code/queue.o"
	@echo 'Finished building: $<'
	@echo ' '

Generated_Code/tasks.o: ../Generated_Code/tasks.c
	@echo 'Building file: $<'
	@echo 'Executing target #47 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Generated_Code/tasks.args" -MMD -MP -MF"$(@:%.o=%.d)" -o"Generated_Code/tasks.o"
	@echo 'Finished building: $<'
	@echo ' '

Generated_Code/timers.o: ../Generated_Code/timers.c
	@echo 'Building file: $<'
	@echo 'Executing target #48 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Generated_Code/timers.args" -MMD -MP -MF"$(@:%.o=%.d)" -o"Generated_Code/timers.o"
	@echo 'Finished building: $<'
	@echo ' '


