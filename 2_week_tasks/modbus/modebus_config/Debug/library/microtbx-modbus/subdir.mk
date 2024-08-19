################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../library/microtbx-modbus/tbxmb_client.c \
../library/microtbx-modbus/tbxmb_event.c \
../library/microtbx-modbus/tbxmb_port.c \
../library/microtbx-modbus/tbxmb_rtu.c \
../library/microtbx-modbus/tbxmb_server.c \
../library/microtbx-modbus/tbxmb_superloop.c \
../library/microtbx-modbus/tbxmb_uart.c 

OBJS += \
./library/microtbx-modbus/tbxmb_client.o \
./library/microtbx-modbus/tbxmb_event.o \
./library/microtbx-modbus/tbxmb_port.o \
./library/microtbx-modbus/tbxmb_rtu.o \
./library/microtbx-modbus/tbxmb_server.o \
./library/microtbx-modbus/tbxmb_superloop.o \
./library/microtbx-modbus/tbxmb_uart.o 

C_DEPS += \
./library/microtbx-modbus/tbxmb_client.d \
./library/microtbx-modbus/tbxmb_event.d \
./library/microtbx-modbus/tbxmb_port.d \
./library/microtbx-modbus/tbxmb_rtu.d \
./library/microtbx-modbus/tbxmb_server.d \
./library/microtbx-modbus/tbxmb_superloop.d \
./library/microtbx-modbus/tbxmb_uart.d 


# Each subdirectory must supply rules for building sources it contributes
library/microtbx-modbus/%.o library/microtbx-modbus/%.su: ../library/microtbx-modbus/%.c library/microtbx-modbus/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F446xx -c -I../Core/Inc -I../library/microtbx -I../library/microtbx-modbus -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../Drivers/CMSIS/Include -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-library-2f-microtbx-2d-modbus

clean-library-2f-microtbx-2d-modbus:
	-$(RM) ./library/microtbx-modbus/tbxmb_client.d ./library/microtbx-modbus/tbxmb_client.o ./library/microtbx-modbus/tbxmb_client.su ./library/microtbx-modbus/tbxmb_event.d ./library/microtbx-modbus/tbxmb_event.o ./library/microtbx-modbus/tbxmb_event.su ./library/microtbx-modbus/tbxmb_port.d ./library/microtbx-modbus/tbxmb_port.o ./library/microtbx-modbus/tbxmb_port.su ./library/microtbx-modbus/tbxmb_rtu.d ./library/microtbx-modbus/tbxmb_rtu.o ./library/microtbx-modbus/tbxmb_rtu.su ./library/microtbx-modbus/tbxmb_server.d ./library/microtbx-modbus/tbxmb_server.o ./library/microtbx-modbus/tbxmb_server.su ./library/microtbx-modbus/tbxmb_superloop.d ./library/microtbx-modbus/tbxmb_superloop.o ./library/microtbx-modbus/tbxmb_superloop.su ./library/microtbx-modbus/tbxmb_uart.d ./library/microtbx-modbus/tbxmb_uart.o ./library/microtbx-modbus/tbxmb_uart.su

.PHONY: clean-library-2f-microtbx-2d-modbus

