#include "main.h"

/**
 * flip_bits - A function that counts the number of bits to change
 * to get from one number to another
 * @n: The first number
 * @m: The second number
 *
 * Return: The number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int m, decimal = 0;
	unsigned long int present;
	unsigned long int expo = n ^ m;

	for (m = 63; m >= 0; m--)
	{
		present = expo >> m;
		if (present & 1)
			decimal++;
	}

	return (decimal);
}
