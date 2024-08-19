################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
S_SRCS += \
../library/microtbx/tbx_comp.s 

C_SRCS += \
../library/microtbx/tbx_aes256.c \
../library/microtbx/tbx_assert.c \
../library/microtbx/tbx_checksum.c \
../library/microtbx/tbx_critsect.c \
../library/microtbx/tbx_crypto.c \
../library/microtbx/tbx_heap.c \
../library/microtbx/tbx_list.c \
../library/microtbx/tbx_mempool.c \
../library/microtbx/tbx_platform.c \
../library/microtbx/tbx_port.c \
../library/microtbx/tbx_random.c 

OBJS += \
./library/microtbx/tbx_aes256.o \
./library/microtbx/tbx_assert.o \
./library/microtbx/tbx_checksum.o \
./library/microtbx/tbx_comp.o \
./library/microtbx/tbx_critsect.o \
./library/microtbx/tbx_crypto.o \
./library/microtbx/tbx_heap.o \
./library/microtbx/tbx_list.o \
./library/microtbx/tbx_mempool.o \
./library/microtbx/tbx_platform.o \
./library/microtbx/tbx_port.o \
./library/microtbx/tbx_random.o 

S_DEPS += \
./library/microtbx/tbx_comp.d 

C_DEPS += \
./library/microtbx/tbx_aes256.d \
./library/microtbx/tbx_assert.d \
./library/microtbx/tbx_checksum.d \
./library/microtbx/tbx_critsect.d \
./library/microtbx/tbx_crypto.d \
./library/microtbx/tbx_heap.d \
./library/microtbx/tbx_list.d \
./library/microtbx/tbx_mempool.d \
./library/microtbx/tbx_platform.d \
./library/microtbx/tbx_port.d \
./library/microtbx/tbx_random.d 


# Each subdirectory must supply rules for building sources it contributes
library/microtbx/%.o library/microtbx/%.su: ../library/microtbx/%.c library/microtbx/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F446xx -c -I../Core/Inc -I../library/microtbx -I../library/microtbx-modbus -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../Drivers/CMSIS/Include -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
library/microtbx/%.o: ../library/microtbx/%.s library/microtbx/subdir.mk
	arm-none-eabi-gcc -mcpu=cortex-m4 -g3 -DDEBUG -c -x assembler-with-cpp -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@" "$<"

clean: clean-library-2f-microtbx

clean-library-2f-microtbx:
	-$(RM) ./library/microtbx/tbx_aes256.d ./library/microtbx/tbx_aes256.o ./library/microtbx/tbx_aes256.su ./library/microtbx/tbx_assert.d ./library/microtbx/tbx_assert.o ./library/microtbx/tbx_assert.su ./library/microtbx/tbx_checksum.d ./library/microtbx/tbx_checksum.o ./library/microtbx/tbx_checksum.su ./library/microtbx/tbx_comp.d ./library/microtbx/tbx_comp.o ./library/microtbx/tbx_critsect.d ./library/microtbx/tbx_critsect.o ./library/microtbx/tbx_critsect.su ./library/microtbx/tbx_crypto.d ./library/microtbx/tbx_crypto.o ./library/microtbx/tbx_crypto.su ./library/microtbx/tbx_heap.d ./library/microtbx/tbx_heap.o ./library/microtbx/tbx_heap.su ./library/microtbx/tbx_list.d ./library/microtbx/tbx_list.o ./library/microtbx/tbx_list.su ./library/microtbx/tbx_mempool.d ./library/microtbx/tbx_mempool.o ./library/microtbx/tbx_mempool.su ./library/microtbx/tbx_platform.d ./library/microtbx/tbx_platform.o ./library/microtbx/tbx_platform.su ./library/microtbx/tbx_port.d ./library/microtbx/tbx_port.o ./library/microtbx/tbx_port.su ./library/microtbx/tbx_random.d ./library/microtbx/tbx_random.o ./library/microtbx/tbx_random.su

.PHONY: clean-library-2f-microtbx

