################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../../makefile.local

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS_QUOTED += \
"../Sources/Util/GlobalVariables.c" \

C_SRCS += \
../Sources/Util/GlobalVariables.c \

OBJS += \
./Sources/Util/GlobalVariables.o \

OBJS_QUOTED += \
"./Sources/Util/GlobalVariables.o" \

C_DEPS += \
./Sources/Util/GlobalVariables.d \

OBJS_OS_FORMAT += \
./Sources/Util/GlobalVariables.o \

C_DEPS_QUOTED += \
"./Sources/Util/GlobalVariables.d" \


# Each subdirectory must supply rules for building sources it contributes
Sources/Util/GlobalVariables.o: ../Sources/Util/GlobalVariables.c
	@echo 'Building file: $<'
	@echo 'Executing target #4 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Sources/Util/GlobalVariables.args" -MMD -MP -MF"$(@:%.o=%.d)" -o"Sources/Util/GlobalVariables.o"
	@echo 'Finished building: $<'
	@echo ' '


