#include "main.h"

/**
 * jack_bauer - prints every minute of the day
 *
 * Return: void
 */
void jack_bauer(void)
{
	int m;
	int l

	for (l = 0; l < 24; ++l)
	{
		for (m = 0; m < 60; ++m)
		{
			_putchar('0' + l / 10);
			_putchar('0' + l % 10);
			_putchar(':');
			_putchar('0' + m / 10);
			_putchar('0' + m % 10);
			_putchar('\n);
		}
	}
}
