################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
C:/Users/abelk/SimplicityStudio/SDKs/simplicity_sdk/util/third_party/segger/systemview/SEGGER/SEGGER_RTT.c 

OBJS += \
./simplicity_sdk_2024.12.1/util/third_party/segger/systemview/SEGGER/SEGGER_RTT.o 

C_DEPS += \
./simplicity_sdk_2024.12.1/util/third_party/segger/systemview/SEGGER/SEGGER_RTT.d 


# Each subdirectory must supply rules for building sources it contributes
simplicity_sdk_2024.12.1/util/third_party/segger/systemview/SEGGER/SEGGER_RTT.o: C:/Users/abelk/SimplicityStudio/SDKs/simplicity_sdk/util/third_party/segger/systemview/SEGGER/SEGGER_RTT.c simplicity_sdk_2024.12.1/util/third_party/segger/systemview/SEGGER/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GNU ARM C Compiler'
	arm-none-eabi-gcc -g -gdwarf-2 -mcpu=cortex-m33 -mthumb -std=c18 '-DDEBUG=1' '-DDEBUG_EFM=1' '-DEFR32BG22C224F512IM40=1' '-DSL_CODE_COMPONENT_SYSTEM=system' '-DHARDWARE_BOARD_DEFAULT_RF_BAND_2400=1' '-DHARDWARE_BOARD_SUPPORTS_1_RF_BAND=1' '-DHARDWARE_BOARD_SUPPORTS_RF_BAND_2400=1' '-DHFXO_FREQ=38400000' '-DSL_BOARD_NAME="BRD4184A"' '-DSL_BOARD_REV="A01"' '-DSL_CODE_COMPONENT_CLOCK_MANAGER=clock_manager' '-DSL_COMPONENT_CATALOG_PRESENT=1' '-DSL_CODE_COMPONENT_DEVICE_PERIPHERAL=device_peripheral' '-DSL_CODE_COMPONENT_HAL_COMMON=hal_common' '-DSL_CODE_COMPONENT_HAL_GPIO=hal_gpio' '-DCMSIS_NVIC_VIRTUAL=1' '-DCMSIS_NVIC_VIRTUAL_HEADER_FILE="cmsis_nvic_virtual.h"' '-DSEGGER_RTT_ALIGNMENT=1024' '-DRTT_USE_ASM=0' '-DSEGGER_RTT_SECTION="SEGGER_RTT"' '-DSL_CODE_COMPONENT_CORE=core' '-DSL_CODE_COMPONENT_SLEEPTIMER=sleeptimer' -I"C:\Users\abelk\SimplicityStudio\v5_workspace\Temperature\config" -I"C:\Users\abelk\SimplicityStudio\v5_workspace\Temperature\autogen" -I"C:\Users\abelk\SimplicityStudio\v5_workspace\Temperature" -I"C:/Users/abelk/SimplicityStudio/SDKs/simplicity_sdk//platform/Device/SiliconLabs/EFR32BG22/Include" -I"C:/Users/abelk/SimplicityStudio/SDKs/simplicity_sdk//platform/common/inc" -I"C:/Users/abelk/SimplicityStudio/SDKs/simplicity_sdk//hardware/board/inc" -I"C:/Users/abelk/SimplicityStudio/SDKs/simplicity_sdk//platform/service/clock_manager/inc" -I"C:/Users/abelk/SimplicityStudio/SDKs/simplicity_sdk//platform/service/clock_manager/src" -I"C:/Users/abelk/SimplicityStudio/SDKs/simplicity_sdk//platform/CMSIS/Core/Include" -I"C:/Users/abelk/SimplicityStudio/SDKs/simplicity_sdk//platform/driver/debug/inc" -I"C:/Users/abelk/SimplicityStudio/SDKs/simplicity_sdk//platform/service/device_manager/inc" -I"C:/Users/abelk/SimplicityStudio/SDKs/simplicity_sdk//platform/service/device_init/inc" -I"C:/Users/abelk/SimplicityStudio/SDKs/simplicity_sdk//platform/emlib/inc" -I"C:/Users/abelk/SimplicityStudio/SDKs/simplicity_sdk//platform/driver/gpio/inc" -I"C:/Users/abelk/SimplicityStudio/SDKs/simplicity_sdk//platform/peripheral/inc" -I"C:/Users/abelk/SimplicityStudio/SDKs/simplicity_sdk//platform/driver/i2cspm/inc" -I"C:/Users/abelk/SimplicityStudio/SDKs/simplicity_sdk//platform/service/interrupt_manager/inc" -I"C:/Users/abelk/SimplicityStudio/SDKs/simplicity_sdk//platform/service/interrupt_manager/inc/arm" -I"C:/Users/abelk/SimplicityStudio/SDKs/simplicity_sdk//platform/service/iostream/inc" -I"C:/Users/abelk/SimplicityStudio/SDKs/simplicity_sdk//platform/service/memory_manager/inc" -I"C:/Users/abelk/SimplicityStudio/SDKs/simplicity_sdk//hardware/driver/mx25_flash_shutdown/inc/sl_mx25_flash_shutdown_usart" -I"C:/Users/abelk/SimplicityStudio/SDKs/simplicity_sdk//util/third_party/segger/systemview/SEGGER" -I"C:/Users/abelk/SimplicityStudio/SDKs/simplicity_sdk//hardware/driver/si70xx/inc" -I"C:/Users/abelk/SimplicityStudio/SDKs/simplicity_sdk//platform/common/toolchain/inc" -I"C:/Users/abelk/SimplicityStudio/SDKs/simplicity_sdk//platform/service/system/inc" -I"C:/Users/abelk/SimplicityStudio/SDKs/simplicity_sdk//platform/service/sleeptimer/inc" -I"C:/Users/abelk/SimplicityStudio/SDKs/simplicity_sdk//platform/service/udelay/inc" -Os -Wall -Wextra -mno-sched-prolog -fno-builtin -ffunction-sections -fdata-sections -imacrossl_gcc_preinclude.h -mcmse -mfpu=fpv5-sp-d16 -mfloat-abi=hard -fno-lto --specs=nano.specs -c -fmessage-length=0 -MMD -MP -MF"simplicity_sdk_2024.12.1/util/third_party/segger/systemview/SEGGER/SEGGER_RTT.d" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


