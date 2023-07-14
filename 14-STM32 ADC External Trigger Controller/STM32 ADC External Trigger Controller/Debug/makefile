################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include Startup/subdir.mk
-include Src/subdir.mk
-include Drivers/STM32F1xx_HAL_Driver/Src/subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

OPTIONAL_TOOL_DEPS := \
$(wildcard ../makefile.defs) \
$(wildcard ../makefile.init) \
$(wildcard ../makefile.targets) \


BUILD_ARTIFACT_NAME := STM32 ADC External Trigger Controller
BUILD_ARTIFACT_EXTENSION := elf
BUILD_ARTIFACT_PREFIX :=
BUILD_ARTIFACT := $(BUILD_ARTIFACT_PREFIX)$(BUILD_ARTIFACT_NAME)$(if $(BUILD_ARTIFACT_EXTENSION),.$(BUILD_ARTIFACT_EXTENSION),)

# Add inputs and outputs from these tool invocations to the build variables 
EXECUTABLES += \
STM32\ ADC\ External\ Trigger\ Controller.elf \

MAP_FILES += \
STM32\ ADC\ External\ Trigger\ Controller.map \

SIZE_OUTPUT += \
default.size.stdout \

OBJDUMP_LIST += \
STM32\ ADC\ External\ Trigger\ Controller.list \

OBJCOPY_HEX += \
STM32\ ADC\ External\ Trigger\ Controller.hex \


# All Target
all: main-build

# Main-build Target
main-build: STM32\ ADC\ External\ Trigger\ Controller.elf secondary-outputs

# Tool invocations
STM32\ ADC\ External\ Trigger\ Controller.elf STM32\ ADC\ External\ Trigger\ Controller.map: $(OBJS) $(USER_OBJS) C:\Users\PC-MAGHREBI\OneDrive\Bureau\STM32\ ADC\ External\ Trigger\ Controller\STM32F103C6TX_FLASH.ld makefile objects.list $(OPTIONAL_TOOL_DEPS)
	arm-none-eabi-gcc -o "STM32 ADC External Trigger Controller.elf" @"objects.list" $(USER_OBJS) $(LIBS) -mcpu=cortex-m3 -T"C:\Users\PC-MAGHREBI\OneDrive\Bureau\STM32 ADC External Trigger Controller\STM32F103C6TX_FLASH.ld" --specs=nosys.specs -Wl,-Map="STM32 ADC External Trigger Controller.map" -Wl,--gc-sections -static --specs=nano.specs -mfloat-abi=soft -mthumb -Wl,--start-group -lc -lm -Wl,--end-group
	@echo 'Finished building target: $@'
	@echo ' '

default.size.stdout: $(EXECUTABLES) makefile objects.list $(OPTIONAL_TOOL_DEPS)
	arm-none-eabi-size  $(EXECUTABLES)
	@echo 'Finished building: $@'
	@echo ' '

STM32\ ADC\ External\ Trigger\ Controller.list: $(EXECUTABLES) makefile objects.list $(OPTIONAL_TOOL_DEPS)
	arm-none-eabi-objdump -h -S $(EXECUTABLES) > "STM32 ADC External Trigger Controller.list"
	@echo 'Finished building: $@'
	@echo ' '

STM32\ ADC\ External\ Trigger\ Controller.hex: $(EXECUTABLES) makefile objects.list $(OPTIONAL_TOOL_DEPS)
	arm-none-eabi-objcopy  -O ihex $(EXECUTABLES) "STM32 ADC External Trigger Controller.hex"
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) STM32\ ADC\ External\ Trigger\ Controller.elf STM32\ ADC\ External\ Trigger\ Controller.hex STM32\ ADC\ External\ Trigger\ Controller.list STM32\ ADC\ External\ Trigger\ Controller.map STM32\\ ADC\\ External\\ Trigger\\ Controller.elf default.size.stdout
	-@echo ' '

secondary-outputs: $(SIZE_OUTPUT) $(OBJDUMP_LIST) $(OBJCOPY_HEX)

fail-specified-linker-script-missing:
	@echo 'Error: Cannot find the specified linker script. Check the linker settings in the build configuration.'
	@exit 2

warn-no-linker-script-specified:
	@echo 'Warning: No linker script specified. Check the linker settings in the build configuration.'

.PHONY: all clean dependents main-build fail-specified-linker-script-missing warn-no-linker-script-specified

-include ../makefile.targets
