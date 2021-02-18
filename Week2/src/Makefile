#******************************************************************************
# Copyright (C) 2017 by Alex Fosdick - University of Colorado
#
# Redistribution, modification or use of this software in source or binary
# forms is permitted as long as the files maintain this copyright. Users are 
# permitted to modify this and use it to learn about the field of embedded
# software. Alex Fosdick and the University of Colorado are not liable for any
# misuse of this material. 
#
#*****************************************************************************

#------------------------------------------------------------------------------
# <Put a Description Here>
#
# Use: make [TARGET] [PLATFORM-OVERRIDES]
#
# Build Targets:
#      <Put a description of the supported targets here>
#
# Platform Overrides:
#      <Put a description of the supported Overrides here
#
#------------------------------------------------------------------------------
include sources.mk

# # Platform Overrides
# ifeq ($(PLATFORM),HOST)
# 	CC = gcc
# else
# 	ifeq ($(PLATFORM), MSP432)
# 		CC = arm-none-eabi-gcc
# 		LD = arm-none-eabi-ld
# 	else
# 		$(error No Platform supported)
# 	endif
# endif

# Architectures Specific Flags
LINKER_FILE = ../msp432p401r.lds
CPU = cortex-m4
ARCH = thumb
SPECS = nosys.specs

# Add directory-list for searching files
vpath %.h ../include ../include/CMSIS ../include/common ../include/msp432

# TARGET = MSP432

# Compiler Flags and Defines
LDFLAGS = -Wl,-Map=$(TARGET).map -T $(LINKER_FILE)
CFLAGS = -std=c99 -mcpu=$(CPU) -m$(ARCH) --specs=$(SPECS) -Wall -g -O0
CPPFLAGs = -I ../include ../include/CMSIS ../include/common ../include/msp432

main: main.o memory.o platform.h
	gcc $(CPPFLAGs) -c $< $(CFLAGS) -o $@

main.o: main.c ../include/common/platform.h
	gcc -c $<

memory.o: memory.c memory.h
	gcc -c $<

system_msp432p401r.o: system_msp432p401r.c msp432p401r.h
	gcc -c $<

startup_msp432p401r_gcc.o: startup_msp432p401r_gcc.c
	gcc -c $<

# .PHONY: build
# build: all

# .PHONY: all
# all: $(TARGET).out: $(OBJS)
# 	$(CC) $(OBJS) $(CFLAGS) $(LDFLAGS) -o $@

.PHONY: clean
	rm -f $(OBJS) $(TARGET).map $(TARGET).o