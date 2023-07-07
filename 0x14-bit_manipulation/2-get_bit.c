#include "main.h"

/**
 * get_bit - A function that returns the value
		of a bit at an index in a decimal number
 * @n: number to search
 * @indess: An index of the bit
 *
 * Return: A value of the bit
 */
int get_bit(unsigned long int n, unsigned int indess)
{
	int bit_value;

	if (indess > 63)
		return (-1);

	bit_value = (n >> indess) & 1;

	return (bit_value);
}
