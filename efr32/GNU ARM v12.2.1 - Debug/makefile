################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include simplicity_sdk_2024.12.1/platform/service/udelay/src/subdir.mk
-include simplicity_sdk_2024.12.1/platform/service/system/src/subdir.mk
-include simplicity_sdk_2024.12.1/platform/service/sleeptimer/src/subdir.mk
-include simplicity_sdk_2024.12.1/platform/service/memory_manager/src/subdir.mk
-include simplicity_sdk_2024.12.1/platform/service/iostream/src/subdir.mk
-include simplicity_sdk_2024.12.1/platform/service/interrupt_manager/src/subdir.mk
-include simplicity_sdk_2024.12.1/platform/service/device_manager/src/subdir.mk
-include simplicity_sdk_2024.12.1/platform/service/device_manager/devices/subdir.mk
-include simplicity_sdk_2024.12.1/platform/service/device_manager/clocks/subdir.mk
-include simplicity_sdk_2024.12.1/platform/service/device_init/src/subdir.mk
-include simplicity_sdk_2024.12.1/platform/service/clock_manager/src/subdir.mk
-include simplicity_sdk_2024.12.1/platform/peripheral/src/subdir.mk
-include simplicity_sdk_2024.12.1/platform/emlib/src/subdir.mk
-include simplicity_sdk_2024.12.1/platform/emdrv/dmadrv/src/subdir.mk
-include simplicity_sdk_2024.12.1/platform/driver/i2cspm/src/subdir.mk
-include simplicity_sdk_2024.12.1/platform/driver/gpio/src/subdir.mk
-include simplicity_sdk_2024.12.1/platform/driver/debug/src/subdir.mk
-include simplicity_sdk_2024.12.1/platform/common/src/subdir.mk
-include simplicity_sdk_2024.12.1/platform/Device/SiliconLabs/EFR32BG22/Source/subdir.mk
-include simplicity_sdk_2024.12.1/hardware/driver/si1133/src/subdir.mk
-include simplicity_sdk_2024.12.1/hardware/driver/mx25_flash_shutdown/src/sl_mx25_flash_shutdown_usart/subdir.mk
-include simplicity_sdk_2024.12.1/hardware/driver/configuration_over_swo/src/subdir.mk
-include simplicity_sdk_2024.12.1/hardware/board/src/subdir.mk
-include simplicity_sdk_2024.12.1/app/bluetooth/common/sensor_light/subdir.mk
-include autogen/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

OPTIONAL_TOOL_DEPS := \
$(wildcard ../makefile.defs) \
$(wildcard ../makefile.init) \
$(wildcard ../makefile.targets) \


BUILD_ARTIFACT_NAME := Ambient Light
BUILD_ARTIFACT_EXTENSION := axf
BUILD_ARTIFACT_PREFIX :=
BUILD_ARTIFACT := $(BUILD_ARTIFACT_PREFIX)$(BUILD_ARTIFACT_NAME)$(if $(BUILD_ARTIFACT_EXTENSION),.$(BUILD_ARTIFACT_EXTENSION),)

# Add inputs and outputs from these tool invocations to the build variables 

# All Target
all: main-build

# Main-build Target
main-build: Ambient\ Light.axf

# Tool invocations
Ambient\ Light.axf: $(OBJS) $(USER_OBJS) makefile objects.mk $(OPTIONAL_TOOL_DEPS)
	@echo 'Building target: $@'
	@echo 'Invoking: GNU ARM C Linker'
	arm-none-eabi-gcc -g -gdwarf-2 -mcpu=cortex-m33 -mthumb -T "C:\Users\abelk\SimplicityStudio\v5_workspace\Ambient Light\autogen\linkerfile.ld" -fno-lto -Wl,--no-warn-rwx-segments -Xlinker --gc-sections -Xlinker -Map="Ambient Light.map" -mfpu=fpv5-sp-d16 -mfloat-abi=hard --specs=nano.specs -o "Ambient Light.axf" -Wl,--start-group "./app.o" "./main.o" "./autogen/sl_board_default_init.o" "./autogen/sl_event_handler.o" "./autogen/sl_i2cspm_init.o" "./autogen/sl_iostream_handles.o" "./autogen/sl_iostream_init_usart_instances.o" "./simplicity_sdk_2024.12.1/app/bluetooth/common/sensor_light/sl_sensor_light.o" "./simplicity_sdk_2024.12.1/hardware/board/src/sl_board_control_gpio.o" "./simplicity_sdk_2024.12.1/hardware/board/src/sl_board_init.o" "./simplicity_sdk_2024.12.1/hardware/driver/configuration_over_swo/src/sl_cos.o" "./simplicity_sdk_2024.12.1/hardware/driver/mx25_flash_shutdown/src/sl_mx25_flash_shutdown_usart/sl_mx25_flash_shutdown.o" "./simplicity_sdk_2024.12.1/hardware/driver/si1133/src/sl_si1133.o" "./simplicity_sdk_2024.12.1/platform/Device/SiliconLabs/EFR32BG22/Source/startup_efr32bg22.o" "./simplicity_sdk_2024.12.1/platform/Device/SiliconLabs/EFR32BG22/Source/system_efr32bg22.o" "./simplicity_sdk_2024.12.1/platform/common/src/sl_assert.o" "./simplicity_sdk_2024.12.1/platform/common/src/sl_core_cortexm.o" "./simplicity_sdk_2024.12.1/platform/common/src/sl_string.o" "./simplicity_sdk_2024.12.1/platform/common/src/sl_syscalls.o" "./simplicity_sdk_2024.12.1/platform/driver/debug/src/sl_debug_swo.o" "./simplicity_sdk_2024.12.1/platform/driver/gpio/src/sl_gpio.o" "./simplicity_sdk_2024.12.1/platform/driver/i2cspm/src/sl_i2cspm.o" "./simplicity_sdk_2024.12.1/platform/emdrv/dmadrv/src/dmadrv.o" "./simplicity_sdk_2024.12.1/platform/emlib/src/em_burtc.o" "./simplicity_sdk_2024.12.1/platform/emlib/src/em_cmu.o" "./simplicity_sdk_2024.12.1/platform/emlib/src/em_core.o" "./simplicity_sdk_2024.12.1/platform/emlib/src/em_emu.o" "./simplicity_sdk_2024.12.1/platform/emlib/src/em_gpio.o" "./simplicity_sdk_2024.12.1/platform/emlib/src/em_i2c.o" "./simplicity_sdk_2024.12.1/platform/emlib/src/em_ldma.o" "./simplicity_sdk_2024.12.1/platform/emlib/src/em_msc.o" "./simplicity_sdk_2024.12.1/platform/emlib/src/em_rtcc.o" "./simplicity_sdk_2024.12.1/platform/emlib/src/em_system.o" "./simplicity_sdk_2024.12.1/platform/emlib/src/em_timer.o" "./simplicity_sdk_2024.12.1/platform/emlib/src/em_usart.o" "./simplicity_sdk_2024.12.1/platform/peripheral/src/sl_hal_gpio.o" "./simplicity_sdk_2024.12.1/platform/service/clock_manager/src/sl_clock_manager.o" "./simplicity_sdk_2024.12.1/platform/service/clock_manager/src/sl_clock_manager_hal_s2.o" "./simplicity_sdk_2024.12.1/platform/service/clock_manager/src/sl_clock_manager_init.o" "./simplicity_sdk_2024.12.1/platform/service/clock_manager/src/sl_clock_manager_init_hal_s2.o" "./simplicity_sdk_2024.12.1/platform/service/device_init/src/sl_device_init_dcdc_s2.o" "./simplicity_sdk_2024.12.1/platform/service/device_init/src/sl_device_init_emu_s2.o" "./simplicity_sdk_2024.12.1/platform/service/device_manager/clocks/sl_device_clock_efr32xg22.o" "./simplicity_sdk_2024.12.1/platform/service/device_manager/devices/sl_device_peripheral_hal_efr32xg22.o" "./simplicity_sdk_2024.12.1/platform/service/device_manager/src/sl_device_clock.o" "./simplicity_sdk_2024.12.1/platform/service/device_manager/src/sl_device_gpio.o" "./simplicity_sdk_2024.12.1/platform/service/device_manager/src/sl_device_peripheral.o" "./simplicity_sdk_2024.12.1/platform/service/interrupt_manager/src/sl_interrupt_manager_cortexm.o" "./simplicity_sdk_2024.12.1/platform/service/iostream/src/sl_iostream.o" "./simplicity_sdk_2024.12.1/platform/service/iostream/src/sl_iostream_retarget_stdio.o" "./simplicity_sdk_2024.12.1/platform/service/iostream/src/sl_iostream_uart.o" "./simplicity_sdk_2024.12.1/platform/service/iostream/src/sl_iostream_usart.o" "./simplicity_sdk_2024.12.1/platform/service/memory_manager/src/sl_memory_manager_region.o" "./simplicity_sdk_2024.12.1/platform/service/sleeptimer/src/sl_sleeptimer.o" "./simplicity_sdk_2024.12.1/platform/service/sleeptimer/src/sl_sleeptimer_hal_burtc.o" "./simplicity_sdk_2024.12.1/platform/service/sleeptimer/src/sl_sleeptimer_hal_prortc.o" "./simplicity_sdk_2024.12.1/platform/service/sleeptimer/src/sl_sleeptimer_hal_rtcc.o" "./simplicity_sdk_2024.12.1/platform/service/sleeptimer/src/sl_sleeptimer_hal_timer.o" "./simplicity_sdk_2024.12.1/platform/service/system/src/sl_system_init.o" "./simplicity_sdk_2024.12.1/platform/service/system/src/sl_system_process_action.o" "./simplicity_sdk_2024.12.1/platform/service/udelay/src/sl_udelay.o" "./simplicity_sdk_2024.12.1/platform/service/udelay/src/sl_udelay_armv6m_gcc.o" -lgcc -lc -lm -lnosys -Wl,--end-group -Wl,--start-group -lgcc -lc -lnosys -Wl,--end-group
	@echo 'Finished building target: $@'
	@echo ' '

	@echo 'Building out file: Ambient Light.out'
	arm-none-eabi-objcopy "Ambient Light.axf" "Ambient Light.out"
	@echo ' '

	@echo 'Building hex file: Ambient Light.hex'
	arm-none-eabi-objcopy -O ihex "Ambient Light.axf" "Ambient Light.hex"
	@echo ' '

	@echo 'Building bin file: Ambient Light.bin'
	arm-none-eabi-objcopy -O binary "Ambient Light.axf" "Ambient Light.bin"
	@echo ' '

	@echo 'Building s37 file: Ambient Light.s37'
	arm-none-eabi-objcopy -O srec "Ambient Light.axf" "Ambient Light.s37"
	@echo ' '

	@echo 'Running size tool'
	arm-none-eabi-size "Ambient Light.axf" -A
	@echo ' '

# Other Targets
clean:
	-@$(foreach FILE, $(EXECUTABLES), $(shell $(RM) $(FILE)) )
	-@$(foreach FILE, $(OBJS), $(shell $(RM) $(FILE)) )
	-@$(foreach FILE, $(C_DEPS), $(shell $(RM) $(FILE)) )
	-$(RM) "Ambient Light.axf"
	-@echo ' '

.PHONY: all clean dependents main-build

-include ../makefile.targets
