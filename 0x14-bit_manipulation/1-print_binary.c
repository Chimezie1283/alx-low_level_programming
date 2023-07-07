#include "main.h"

/**
 * print_binary - A function that prints the binary
		equivalence of a decimal number
 * @n: number to print in binary
 */
void print_binary(unsigned long int n)
{
	int j, countz = 0;
	unsigned long int current;

	for (j = 63; j >= 0; j--)
	{
		current = n >> j;

		if (current & 1)
		{
			_putchar('1');
			countz++;
		}
		else if (countz)
			_putchar('0');
	}
	if (!countz)
		_putchar('0');
}
