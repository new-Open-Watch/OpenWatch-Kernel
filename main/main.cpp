#include <stdio.h>
#include "owgl.h"
#include "driver/gpio.h"
gpio_config_t io_conf = {
    .pin_bit_mask = (1ULL << GPIO_NUM_10),
    .mode = GPIO_MODE_OUTPUT,
    .pull_up_en = GPIO_PULLUP_DISABLE,
    .pull_down_en = GPIO_PULLDOWN_DISABLE,
    .intr_type = GPIO_INTR_DISABLE,
};

extern "C" void app_main(void)
{
    gpio_config(&io_conf);

    gpio_set_level(GPIO_NUM_10, 1);
}