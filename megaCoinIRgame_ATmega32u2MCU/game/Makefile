# File:   Makefile
# Author: M. P. Hayes, UCECE. Modified by Tony Booth
# Date:   12 Sep 2010
# Descr:  Makefile for Assignment1

# Definitions.
CC = avr-gcc
CFLAGS = -mmcu=atmega32u2 -Os -Wall -Wstrict-prototypes -Wextra -g -I../../drivers -I../../fonts -I../../drivers/avr -I../../utils
OBJCOPY = avr-objcopy
SIZE = avr-size
DEL = rm


# Default target.
all: game.out


# Compile: create object files from C source files.
game.o: game.c startscreen.h comm.h gameplay.h ../../drivers/avr/pio.h ../../drivers/avr/system.h ../../utils/pacer.h ../../drivers/ledmat.h ../../drivers/button.h ../../drivers/display.h ../../drivers/navswitch.h ../../drivers/avr/timer.h ../../utils/tinygl.h ../../fonts/font3x5_1.h ../../utils/font.h ../../utils/task.h ../../drivers/led.h ../../drivers/avr/ir_uart.h
	$(CC) -c $(CFLAGS) $< -o $@

pio.o: ../../drivers/avr/pio.c ../../drivers/avr/pio.h ../../drivers/avr/system.h
	$(CC) -c $(CFLAGS) $< -o $@

system.o: ../../drivers/avr/system.c ../../drivers/avr/system.h
	$(CC) -c $(CFLAGS) $< -o $@

timer.o: ../../drivers/avr/timer.c ../../drivers/avr/system.h ../../drivers/avr/timer.h
	$(CC) -c $(CFLAGS) $< -o $@

timer0.o: ../../drivers/avr/timer0.c ../../drivers/avr/bits.h ../../drivers/avr/prescale.h ../../drivers/avr/system.h ../../drivers/avr/timer0.h
	$(CC) -c $(CFLAGS) $< -o $@

prescale.o: ../../drivers/avr/prescale.c ../../drivers/avr/prescale.h ../../drivers/avr/system.h
	$(CC) -c $(CFLAGS) $< -o $@
	
pacer.o: ../../utils/pacer.c ../../drivers/avr/system.h ../../drivers/avr/timer.h ../../utils/pacer.h
	$(CC) -c $(CFLAGS) $< -o $@
	
ledmat.o: ../../drivers/ledmat.c ../../drivers/avr/pio.h ../../drivers/avr/system.h ../../drivers/ledmat.h
	$(CC) -c $(CFLAGS) $< -o $@
	
button.o: ../../drivers/button.c ../../drivers/avr/pio.h ../../drivers/avr/system.h ../../drivers/button.h
	$(CC) -c $(CFLAGS) $< -o $@

display.o: ../../drivers/display.c ../../drivers/avr/system.h ../../drivers/ledmat.h ../../drivers/display.h
	$(CC) -c $(CFLAGS) $< -o $@
	
navswitch.o: ../../drivers/navswitch.c ../../drivers/avr/delay.h ../../drivers/avr/pio.h ../../drivers/avr/system.h ../../drivers/navswitch.h
	$(CC) -c $(CFLAGS) $< -o $@

tinygl.o: ../../utils/tinygl.c ../../drivers/avr/system.h ../../drivers/display.h ../../utils/font.h ../../utils/tinygl.h
	$(CC) -c $(CFLAGS) $< -o $@
	
font.o: ../../utils/font.c ../../drivers/avr/system.h ../../utils/font.h
	$(CC) -c $(CFLAGS) $< -o $@

task.o: ../../utils/task.c ../../drivers/avr/system.h ../../drivers/avr/timer.h ../../utils/task.h
	$(CC) -c $(CFLAGS) $< -o $@
	
led.o: ../../drivers/led.c ../../drivers/avr/pio.h ../../drivers/avr/system.h ../../drivers/led.h
	$(CC) -c $(CFLAGS) $< -o $@

ir_uart.o: ../../drivers/avr/ir_uart.c ../../drivers/avr/ir_uart.h ../../drivers/avr/pio.h ../../drivers/avr/system.h ../../drivers/avr/timer0.h ../../drivers/avr/usart1.h
	$(CC) -c $(CFLAGS) $< -o $@

usart1.o: ../../drivers/avr/usart1.c ../../drivers/avr/system.h ../../drivers/avr/usart1.h
	$(CC) -c $(CFLAGS) $< -o $@
	
startscreen.o: startscreen.c startscreen.h ../../utils/tinygl.h ../../drivers/avr/system.h ../../utils/font.h ../../drivers/button.h ../../utils/pacer.h ../../drivers/navswitch.h
	$(CC) -c $(CFLAGS) $< -o $@
	
comm.o : comm.c comm.h ../../drivers/avr/system.h ../../drivers/avr/ir_uart.h startscreen.h
	 $(CC) -c $(CFLAGS) $< -o $@
	 
gameplay.o: gameplay.c gameplay.h comm.h ../../drivers/avr/system.h ../../drivers/display.h ../../drivers/avr/pio.h ../../utils/pacer.h ../../drivers/ledmat.h ../../drivers/navswitch.h ../../drivers/avr/timer.h ../../drivers/led.h ../../drivers/avr/ir_uart.h
	 $(CC) -c $(CFLAGS) $< -o $@

# Link: create ELF output file from object files.
game.out: game.o pio.o system.o timer.o pacer.o ledmat.o button.o display.o navswitch.o startscreen.o tinygl.o font.o task.o led.o comm.o ir_uart.o usart1.o timer0.o prescale.o gameplay.o
	$(CC) $(CFLAGS) $^ -o $@ -lm
	$(SIZE) $@

# Target: clean project.
.PHONY: clean
clean: 
	-$(DEL) *.o *.out *.hex


# Target: program project.
.PHONY: program
program: game.out
	$(OBJCOPY) -O ihex game.out game.hex
	dfu-programmer atmega32u2 erase; dfu-programmer atmega32u2 flash game.hex; dfu-programmer atmega32u2 start


