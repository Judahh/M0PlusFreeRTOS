################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.local

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../Sources/application.cpp \

C_SRCS_QUOTED += \
"../Sources/Events.c" \
"../Sources/ProcessorExpert.c" \

C_SRCS += \
../Sources/Events.c \
../Sources/ProcessorExpert.c \

CPP_SRCS_QUOTED += \
"../Sources/application.cpp" \

OBJS += \
./Sources/Events.o \
./Sources/ProcessorExpert.o \
./Sources/application.o \

OBJS_QUOTED += \
"./Sources/Events.o" \
"./Sources/ProcessorExpert.o" \
"./Sources/application.o" \

CPP_DEPS_QUOTED += \
"./Sources/application.d" \

CPP_DEPS += \
./Sources/application.d \

C_DEPS += \
./Sources/Events.d \
./Sources/ProcessorExpert.d \

C_DEPS_QUOTED += \
"./Sources/Events.d" \
"./Sources/ProcessorExpert.d" \

OBJS_OS_FORMAT += \
./Sources/Events.o \
./Sources/ProcessorExpert.o \
./Sources/application.o \


# Each subdirectory must supply rules for building sources it contributes
Sources/Events.o: ../Sources/Events.c
	@echo 'Building file: $<'
	@echo 'Executing target #1 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C++ Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-g++" "$<" @"Sources/Events.args" -Wa,-adhlns="$@.lst" -MMD -MP -MF"$(@:%.o=%.d)" -o"Sources/Events.o"
	@echo 'Finished building: $<'
	@echo ' '

Sources/ProcessorExpert.o: ../Sources/ProcessorExpert.c
	@echo 'Building file: $<'
	@echo 'Executing target #2 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C++ Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-g++" "$<" @"Sources/ProcessorExpert.args" -Wa,-adhlns="$@.lst" -MMD -MP -MF"$(@:%.o=%.d)" -o"Sources/ProcessorExpert.o"
	@echo 'Finished building: $<'
	@echo ' '

Sources/application.o: ../Sources/application.cpp
	@echo 'Building file: $<'
	@echo 'Executing target #3 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C++ Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-g++" "$<" @"Sources/application.args" -Wa,-adhlns="$@.lst" -MMD -MP -MF"$(@:%.o=%.d)" -o"Sources/application.o"
	@echo 'Finished building: $<'
	@echo ' '


