################################################################################
# Automatically-generated file. Do not edit!
################################################################################

SHELL = cmd.exe

CG_TOOL_ROOT := C:/ti/ccsv5/tools/compiler/arm_5.0.1

ORDERED_OBJS += \
$(GEN_CMDS__FLAG) \
"./waveform.obj" \
"./ustdlib.obj" \
"./startup_ccs.obj" \
"./rit128x96x4.obj" \
"./peak_to_peak.obj" \
"./my_timer.obj" \
"./my_adc.obj" \
"./isqrt.obj" \
"./frequency.obj" \
"./display.obj" \
"./buttons.obj" \
"./VRMS.obj" \
"./Scheduler.obj" \
"./MSE.obj" \
-l"libc.a" \
-l"C:\Courses\ENCE361\StellarisWare\driverlib\ccs-cm3\Debug\driverlib-cm3.lib" \
"../lm3s1968.cmd" \

-include ../makefile.init

RM := DEL /F
RMDIR := RMDIR /S/Q

# All of the sources participating in the build are defined here
-include sources.mk
-include subdir_vars.mk
-include subdir_rules.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(S62_DEPS)),)
-include $(S62_DEPS)
endif
ifneq ($(strip $(C64_DEPS)),)
-include $(C64_DEPS)
endif
ifneq ($(strip $(ASM_DEPS)),)
-include $(ASM_DEPS)
endif
ifneq ($(strip $(CC_DEPS)),)
-include $(CC_DEPS)
endif
ifneq ($(strip $(S55_DEPS)),)
-include $(S55_DEPS)
endif
ifneq ($(strip $(C67_DEPS)),)
-include $(C67_DEPS)
endif
ifneq ($(strip $(C??_DEPS)),)
-include $(C??_DEPS)
endif
ifneq ($(strip $(CLA_DEPS)),)
-include $(CLA_DEPS)
endif
ifneq ($(strip $(CPP_DEPS)),)
-include $(CPP_DEPS)
endif
ifneq ($(strip $(S??_DEPS)),)
-include $(S??_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
ifneq ($(strip $(C62_DEPS)),)
-include $(C62_DEPS)
endif
ifneq ($(strip $(CXX_DEPS)),)
-include $(CXX_DEPS)
endif
ifneq ($(strip $(C++_DEPS)),)
-include $(C++_DEPS)
endif
ifneq ($(strip $(ASM_UPPER_DEPS)),)
-include $(ASM_UPPER_DEPS)
endif
ifneq ($(strip $(K_DEPS)),)
-include $(K_DEPS)
endif
ifneq ($(strip $(C43_DEPS)),)
-include $(C43_DEPS)
endif
ifneq ($(strip $(S67_DEPS)),)
-include $(S67_DEPS)
endif
ifneq ($(strip $(SA_DEPS)),)
-include $(SA_DEPS)
endif
ifneq ($(strip $(S43_DEPS)),)
-include $(S43_DEPS)
endif
ifneq ($(strip $(OPT_DEPS)),)
-include $(OPT_DEPS)
endif
ifneq ($(strip $(S64_DEPS)),)
-include $(S64_DEPS)
endif
ifneq ($(strip $(C_UPPER_DEPS)),)
-include $(C_UPPER_DEPS)
endif
ifneq ($(strip $(C55_DEPS)),)
-include $(C55_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 

# All Target
all: Nathan_project.out

# Tool invocations
Nathan_project.out: $(OBJS) $(CMD_SRCS) $(GEN_CMDS)
	@echo 'Building target: $@'
	@echo 'Invoking: ARM Linker'
	"C:/ti/ccsv5/tools/compiler/arm_5.0.1/bin/armcl" -mv7M3 --code_state=16 --abi=eabi -me -g --diag_warning=225 --display_error_number --diag_wrap=off -z --stack_size=0x800 -m"Nathan_project.map" --heap_size=0x800 -i"C:/ti/ccsv5/tools/compiler/arm_5.0.1/lib" -i"C:/ti/ccsv5/tools/compiler/arm_5.0.1/include" --reread_libs --warn_sections --display_error_number --diag_wrap=off --rom_model -o "Nathan_project.out" $(ORDERED_OBJS)
	@echo 'Finished building target: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(TMS470_EXECUTABLE_OUTPUTS__QUOTED) "Nathan_project.out"
	-$(RM) "MSE.pp" "Scheduler.pp" "VRMS.pp" "buttons.pp" "display.pp" "frequency.pp" "isqrt.pp" "my_adc.pp" "my_timer.pp" "peak_to_peak.pp" "rit128x96x4.pp" "startup_ccs.pp" "ustdlib.pp" "waveform.pp" 
	-$(RM) "MSE.obj" "Scheduler.obj" "VRMS.obj" "buttons.obj" "display.obj" "frequency.obj" "isqrt.obj" "my_adc.obj" "my_timer.obj" "peak_to_peak.obj" "rit128x96x4.obj" "startup_ccs.obj" "ustdlib.obj" "waveform.obj" 
	-@echo 'Finished clean'
	-@echo ' '

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets
