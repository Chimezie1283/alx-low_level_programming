#include "main.h"

/**
 * jack_bauer - prints every minute of the day
 *
 * Return: void
 */
void jack_bauer(void)
{
	int m, n, o, p;

	for (m = 0; m <= 2; m++)
	{
		for (n = 0; n <= 9; n++)
		{
			if ((m <= 1 && n <= 9) || (m <= 2 && n <= 3))
			{
				for (o = 0; o <= 5; o++)
				{
					for (p = 0; p <= 9; p++)
					{
						_putchar(m + '0');
						_putchar(n + '0');
						_putchar(58);
						_putchar(o + '0');
						_putchar(p + '0');
						_putchar('\n');
					}
				}
			}
		}
	}
}
