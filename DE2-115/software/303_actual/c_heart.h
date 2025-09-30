/*
 * c_heart.h
 *
 *  Created on: 30/09/2025
 *      Author: jkim960
 */

#ifndef C_HEART_H_
#define C_HEART_H_

#include <stdio.h>
#include <stdint.h>

#include "system.h"
#include "timing.h"
#include "altera_avalon_pio_regs.h"


#include "sys/alt_alarm.h"

alt_u32 URI_LRI_interrupt();
alt_u32 PVARP_interrupt();
alt_u32 VRP_interrupt();
alt_u32 AEI_AVI_interrupt();

void extern_v_interrupt();
void extern_a_interrupt();

void start_cycle(); // starts URI, LRI, AEI, VRP, PVARP after a V event



#endif /* C_HEART_H_ */
