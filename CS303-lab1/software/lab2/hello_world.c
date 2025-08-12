/*
 * "Hello World" example.
 *
 * This example prints 'Hello from Nios II' to the STDOUT stream. It runs on
 * the Nios II 'standard', 'full_featured', 'fast', and 'low_cost' example
 * designs. It runs with or without the MicroC/OS-II RTOS and requires a STDOUT
 * device in your system's hardware.
 * The memory footprint of this hosted application is ~69 kbytes by default
 * using the standard reference design.
 *
 * For a reduced footprint version of this template, and an explanation of how
 * to reduce the memory footprint for a given application, see the
 * "small_hello_world" template.
 *
 */

#include <stdio.h>
#include "sccharts.h"
#include "system.h" // to use the symbolic names
#include "altera_avalon_pio_regs.h" // to use PIO functions
#include <stdint.h>

int main()
{
  printf("program\n");

  TickData t;

  reset(&t);

  uint8_t buttons = 0xff;

  for(;;){

	  buttons = IORD_ALTERA_AVALON_PIO_DATA(KEYS_BASE);
	  t.A = buttons && 0x04;
	  t.B = buttons && 0x02;
	  t.R = buttons && 0x01;

	  tick(&t);

	  IOWR_ALTERA_AVALON_PIO_SET_BITS(LEDS_RED_BASE, t.O * 255);
  }

  return 0;
}
