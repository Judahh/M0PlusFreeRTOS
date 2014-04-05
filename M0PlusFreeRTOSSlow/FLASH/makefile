################################################################################
# Automatically-generated file. Do not edit!
################################################################################

#Progress monitor hint: 42
first : all
-include ../makefile.init

# This file contains definitions of environment variables used in the makefiles and .args files if exist.
-include makefile.local

RM := "$(GNU_Make_Install_DirEnv)/rm" -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include subdir.mk
-include Sources/subdir.mk
-include Sources/Util/subdir.mk
-include Sources/Tasks/subdir.mk
-include Project_Settings/Startup_Code/subdir.mk
-include Generated_Code/subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
ifneq ($(strip $(ASM_DEPS)),)
-include $(ASM_DEPS)
endif
ifneq ($(strip $(ASM_UPPER_DEPS)),)
-include $(ASM_UPPER_DEPS)
endif
ifneq ($(strip $(SX_DEPS)),)
-include $(SX_DEPS)
endif
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
EXECUTABLES += \
M0PlusFreeRTOSSlow.elf \

EXECUTABLES_QUOTED += \
"M0PlusFreeRTOSSlow.elf" \

EXECUTABLES_OS_FORMAT += \
M0PlusFreeRTOSSlow.elf \

SECONDARY_SIZE += \
M0PlusFreeRTOSSlow.siz \

SECONDARY_SIZE_QUOTED += \
"M0PlusFreeRTOSSlow.siz" \

SECONDARY_SIZE_OS_FORMAT += \
M0PlusFreeRTOSSlow.siz \


# All Target
all: warning-messages explicit-dependencies M0PlusFreeRTOSSlow.elf secondary-outputs

# Tool invocations
M0PlusFreeRTOSSlow.elf: $(OBJS) $(USER_OBJS) ../Project_Settings/Linker_Files/ProcessorExpert.ld
	@echo 'Building target: $@'
	@echo 'Executing target #43 $@'
	@echo 'Invoking: ARM Ltd Windows GCC C Linker'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc"  $(USER_OBJS_QUOTED) $(LIBS_QUOTED) @"M0PlusFreeRTOSSlow.args" -o"M0PlusFreeRTOSSlow.elf"
	@echo 'Finished building target: $@'
	@echo ' '

M0PlusFreeRTOSSlow.siz: M0PlusFreeRTOSSlow.elf
	@echo 'Executing target #44 $@'
	@echo 'Invoking: ARM Ltd Windows GNU Print Size'
	"$(ARMSourceryDirEnv)/arm-none-eabi-size"  --format=berkeley M0PlusFreeRTOSSlow.elf
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) "./*/*.d"  "./*/*.o" "./*/*/*.o"  $(S_UPPER_DEPS_QUOTED) $(ASM_DEPS_QUOTED) $(SECONDARY_SIZE_QUOTED) $(ASM_UPPER_DEPS_QUOTED) $(SX_DEPS_QUOTED) $(EXECUTABLES_QUOTED) "./*/*.d" "./*/*/*.d"  $(ProjDirPath)/FLASH/M0PlusFreeRTOSSlow.elf
	-@echo ' '

secondary-outputs: $(SECONDARY_SIZE)

.PHONY: all clean dependents explicit-dependencies warning-messages
.SECONDARY:

-include ../makefile.targets

explicit-dependencies: ../Project_Settings/Linker_Files/ProcessorExpert.ld M0PlusFreeRTOSSlow.elf 

warning-messages: 

