################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (9-2020-q2-update)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Core/Src/M1_fsm.c \
../Core/Src/M2_fsm.c \
../Core/Src/M3_fsm.c \
../Core/Src/M4_fsm.c \
../Core/Src/Pedestrian.c \
../Core/Src/Pedestrian_Buzzer.c \
../Core/Src/add_time.c \
../Core/Src/global.c \
../Core/Src/input_reading.c \
../Core/Src/main.c \
../Core/Src/software_timer.c \
../Core/Src/stm32f1xx_hal_msp.c \
../Core/Src/stm32f1xx_it.c \
../Core/Src/syscalls.c \
../Core/Src/sysmem.c \
../Core/Src/system_stm32f1xx.c \
../Core/Src/uart.c 

OBJS += \
./Core/Src/M1_fsm.o \
./Core/Src/M2_fsm.o \
./Core/Src/M3_fsm.o \
./Core/Src/M4_fsm.o \
./Core/Src/Pedestrian.o \
./Core/Src/Pedestrian_Buzzer.o \
./Core/Src/add_time.o \
./Core/Src/global.o \
./Core/Src/input_reading.o \
./Core/Src/main.o \
./Core/Src/software_timer.o \
./Core/Src/stm32f1xx_hal_msp.o \
./Core/Src/stm32f1xx_it.o \
./Core/Src/syscalls.o \
./Core/Src/sysmem.o \
./Core/Src/system_stm32f1xx.o \
./Core/Src/uart.o 

C_DEPS += \
./Core/Src/M1_fsm.d \
./Core/Src/M2_fsm.d \
./Core/Src/M3_fsm.d \
./Core/Src/M4_fsm.d \
./Core/Src/Pedestrian.d \
./Core/Src/Pedestrian_Buzzer.d \
./Core/Src/add_time.d \
./Core/Src/global.d \
./Core/Src/input_reading.d \
./Core/Src/main.d \
./Core/Src/software_timer.d \
./Core/Src/stm32f1xx_hal_msp.d \
./Core/Src/stm32f1xx_it.d \
./Core/Src/syscalls.d \
./Core/Src/sysmem.d \
./Core/Src/system_stm32f1xx.d \
./Core/Src/uart.d 


# Each subdirectory must supply rules for building sources it contributes
Core/Src/%.o: ../Core/Src/%.c Core/Src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F103xB -c -I../Core/Inc -I../Drivers/STM32F1xx_HAL_Driver/Inc -I../Drivers/STM32F1xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F1xx/Include -I../Drivers/CMSIS/Include -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

