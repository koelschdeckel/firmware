#include "scu.h"

/* set pin function. See table 169 in user manual (UM10430) */
void scu_set_pin_mode(uint8_t group, uint8_t idx, uint8_t mode) {
	uint32_t val = SCU->GROUP[group].SFS[idx];
	val &= ~0x07;
	val |= (mode & 0x07);
	SCU->GROUP[group].SFS[idx] = val;
}

void scu_set_pin_pullup(uint8_t group, uint8_t idx, bool enable) {
	if (enable) SCU->GROUP[group].SFS[idx] |= 0x08;
	else SCU->GROUP[group].SFS[idx] &= ~0x08;
}

void scu_set_pin_pulldown(uint8_t group, uint8_t idx, bool enable) {
	if (enable) SCU->GROUP[group].SFS[idx] |= 0x10;
	else SCU->GROUP[group].SFS[idx] &= ~0x10;
}

void scu_set_pin_slew_rate(uint8_t group, uint8_t idx, bool fast) {
	if (fast) SCU->GROUP[group].SFS[idx] |= 0x20;
	else SCU->GROUP[group].SFS[idx] &= ~0x20;
}

void scu_enable_pin_in_buffer(uint8_t group, uint8_t idx, bool enable) {
	if (enable) SCU->GROUP[group].SFS[idx] |= 0x40;
	else SCU->GROUP[group].SFS[idx] &= ~0x40;
}

void scu_enable_pin_glitch_filter(uint8_t group, uint8_t idx, bool enable) {
	if (enable) SCU->GROUP[group].SFS[idx] |= 0x80;
	else SCU->GROUP[group].SFS[idx] &= ~0x80;
}

void scu_set_pin_drive_strength(uint8_t group, uint8_t idx, uint8_t strength) {
	uint32_t val = SCU->GROUP[group].SFS[idx];
	val &= ~0x300;
	val |= ((strength & 0x03) << 8);
	SCU->GROUP[group].SFS[idx] = val;
}
