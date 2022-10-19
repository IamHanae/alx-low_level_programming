#include "main.h"

/**
 * jack_bauer - Prints every minute of the day of Jack Bauer
 *
 * Return: Nothing
 */
void jack_bauer(void)
{
	int hour, mins;

	for (hour = 0; hour < 24; hour++)
	{
		for (mins = 0; mins < 60; mins++)
		{
			_putchar((hour / 10) + '0');
			_putchar((hour % 10) + '0');
			_putchar(':');
			_putchar((mins / 10) + '0');
			_putchar((mins % 10) + '0');
			_putchar('\n');
		}
	}
}
