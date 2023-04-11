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
	unsigned long int difference;
	int count;

	difference = n ^ m;
	count = 0;

	while (difference)
	{
		count++;
		difference &= (difference - 1);
	}

	return (count);
}
