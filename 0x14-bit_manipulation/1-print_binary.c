#include "main.h"

/**
 * print_binary - A function that prints the
 * binary equivalent of a decimal number
 * @n: The number to print in binary
 */
void print_binary(unsigned long int n)
{
	int m, decimal = 0;
	unsigned long int present;

	for (m = 63; m >= 0; m--)
	{
		present = n >> m;

		if (present & 1)
		{
			_putchar('1');
			decimal++;
		}
		else if (decimal)
			_putchar('0');
	}
	if (!decimal)
		_putchar('0');
}
