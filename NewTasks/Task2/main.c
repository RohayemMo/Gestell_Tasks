#include <util/delay.h>
#include "MCAL/DIO/DIO_interface.h"
#include "MCAL/TIMER/TIMER_interface.h"
#include <stdint.h>

int main(void)
{
    DIO_set_pin_direction(Dio_groupB, Dio_pin3, output);

    timer0_config_t pwm_cfg;
    pwm_cfg.timer_mode = Timer0_PWMmode;
    pwm_cfg.compare_match_value = 0;
    pwm_cfg.preload_value = 0;

    TIMER0_init(pwm_cfg);

    TIMER0_start(Timer0_Prescaler64);

    while (1)
    {
        for (uint16_t brightness = 0; brightness <= 255; brightness += 5)
        {
            TIMER0_set_compare_match((uint8_t)brightness);
            _delay_ms(15);
        }

        for (int16_t brightness = 255; brightness >= 0; brightness -= 5)
        {
            TIMER0_set_compare_match((uint8_t)brightness);
            _delay_ms(15);
        }
    }

    return 0;
}