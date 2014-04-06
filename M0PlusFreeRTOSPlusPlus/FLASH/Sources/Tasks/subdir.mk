################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../../makefile.local

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../Sources/Tasks/Test.cpp \

CPP_SRCS_QUOTED += \
"../Sources/Tasks/Test.cpp" \

OBJS += \
./Sources/Tasks/Test.o \

OBJS_QUOTED += \
"./Sources/Tasks/Test.o" \

CPP_DEPS_QUOTED += \
"./Sources/Tasks/Test.d" \

CPP_DEPS += \
./Sources/Tasks/Test.d \

OBJS_OS_FORMAT += \
./Sources/Tasks/Test.o \


# Each subdirectory must supply rules for building sources it contributes
Sources/Tasks/Test.o: ../Sources/Tasks/Test.cpp
	@echo 'Building file: $<'
	@echo 'Executing target #4 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C++ Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-g++" "$<" @"Sources/Tasks/Test.args" -Wa,-adhlns="$@.lst" -MMD -MP -MF"$(@:%.o=%.d)" -o"Sources/Tasks/Test.o"
	@echo 'Finished building: $<'
	@echo ' '


