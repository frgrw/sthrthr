#include "sculpt.h"
#include "debounce.h"
#include <avr/power.h>

void keyboard_pre_init_kb(void) {
    keyboard_pre_init_user();

    // The default fuse bit from the factory enables CLKDIV,
    // so enable full frequency in software.
    clock_prescale_set(clock_div_1);

    // Default the charge pump's EN to off
    PORTB &= ~1;
    DDRB |= 1;
}

void keyboard_post_init_kb(void) {
    // This runs after dip_switch_init. We cannot rely on the internal
    // pull-up on the Fn switch pin because the pull-down is weak at about
    // 47K and the AT90USB's internal pull-up is between 20K and 50K.
    setPinInput(F4);

    keyboard_post_init_user();
}

bool dip_switch_update_kb(uint8_t index, bool active) {
    switch (index) {
    case 0:
        if (active) {
            layer_off(1);
        } else {
            layer_on(1);
        }
    }
    return dip_switch_update_user(index, active);
}
