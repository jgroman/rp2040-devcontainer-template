#include <stdio.h>

#include "pico/stdlib.h"
// #include "hardware/gpio.h"
#include "pico/cyw43_arch.h"
#include "pico/binary_info.h"

const uint LED_PIN = CYW43_WL_GPIO_LED_PIN;

int main() {

    bi_decl(bi_program_description("This is a test binary."));
    bi_decl(bi_1pin_with_name(LED_PIN, "On-board LED"));

    stdio_init_all();

    if (cyw43_arch_init()) {
        return -1;
    }

    // gpio_init(LED_PIN);
    // gpio_set_dir(LED_PIN, GPIO_OUT);

    while(1) {
        cyw43_arch_gpio_put(CYW43_WL_GPIO_LED_PIN, 1);
        sleep_ms(250);
        cyw43_arch_gpio_put(CYW43_WL_GPIO_LED_PIN, 0);
        sleep_ms(1000);
    }

}
