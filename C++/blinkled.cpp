#include <avr/io.h>
#include <util/delay.h>

int main()
{
        /* We want to make DDRB5 HIGH because that means PB5 is output
        And we want to make PB5 or PortB5 HIGH to output something. */
        DDRB = DDRB | (1 << DDB5);
        while(true)
        {
                PORTB = PORTB | (1 << PORTB5);
                _delay_ms(1000);
                PORTB = PORTB & ~(1 << PORTB5);
                _delay_ms(1000);
        }
        return 0;
}
