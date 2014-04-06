################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../../makefile.local

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../Sources/Task/Thread.cpp \

CPP_SRCS_QUOTED += \
"../Sources/Task/Thread.cpp" \

OBJS += \
./Sources/Task/Thread.o \

OBJS_QUOTED += \
"./Sources/Task/Thread.o" \

CPP_DEPS_QUOTED += \
"./Sources/Task/Thread.d" \

CPP_DEPS += \
./Sources/Task/Thread.d \

OBJS_OS_FORMAT += \
./Sources/Task/Thread.o \


# Each subdirectory must supply rules for building sources it contributes
Sources/Task/Thread.o: ../Sources/Task/Thread.cpp
	@echo 'Building file: $<'
	@echo 'Executing target #5 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C++ Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-g++" "$<" @"Sources/Task/Thread.args" -Wa,-adhlns="$@.lst" -MMD -MP -MF"$(@:%.o=%.d)" -o"Sources/Task/Thread.o"
	@echo 'Finished building: $<'
	@echo ' '


