################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/HalfPyramidOfAlphabet.c 

C_DEPS += \
./src/HalfPyramidOfAlphabet.d 

OBJS += \
./src/HalfPyramidOfAlphabet.o 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.c src/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-src

clean-src:
	-$(RM) ./src/HalfPyramidOfAlphabet.d ./src/HalfPyramidOfAlphabet.o

.PHONY: clean-src

