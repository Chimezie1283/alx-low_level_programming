#include "main.h"

/**
 * flip_bits - This counts the number of bits to change
 * in order to get from one number to another
 * @n: The first number
 * @m: The second number
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int j, countz = 0;
	unsigned long int current;
	unsigned long int excluxive = n ^ m;

	for (j = 63; j >= 0; j--)
	{
		current = excluxive >> i;
		if (current & 1)
			countz++;
	}

	return (countz);
}
