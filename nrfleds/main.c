#include "everykey/everykey.h"

#define NRF0_0_PIN P5_6_AS_GPIO_2_15
#define NRF0_1_PIN P5_7_AS_GPIO_2_7
#define NRF0_2_PIN P5_2_AS_GPIO_2_11

void main(void) {
	sparrow_init();
	set_digital_input(NRF0_0_PIN, true, false, true);
	set_digital_input(NRF0_1_PIN, true, false, true);
	set_digital_input(NRF0_2_PIN, true, false, true);

	while (1) {
		write_pin(LED1_PIN, read_pin(NRF0_0_PIN));
		write_pin(LED2_PIN, read_pin(NRF0_1_PIN));
		write_pin(LED3_PIN, read_pin(NRF0_2_PIN));
	}
}
