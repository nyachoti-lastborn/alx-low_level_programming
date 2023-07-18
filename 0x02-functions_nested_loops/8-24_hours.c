#include "main.h"

/**
 * jack_bauer - print every minute of the day
 *
 */
void jack_bauer(void)
{
for (int hour = 0; hour < 24; hour++)
{
for (int minute = 0; minute < 60; minute++)
{
int hourTens = hour / 10;
int hourOnes = hour % 10;
int minuteTens = minute / 10;
int minuteOnes = minute % 10;
_putchar(hourTens + '0');
_putchar(hourOnes + '0');
_putchar(':');
_putchar(minuteTens + '0');
_putchar(minuteOnes + '0');
_putchar('\n');
}
}
}
