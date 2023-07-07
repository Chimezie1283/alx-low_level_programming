#include "main.h"

/**
 * clear_bit - This sets the value of a given bit to 0
 * @n: A pointer to the number to change
 * @index: An index of the bit to clear
 *
 * Return: 1 for success, -1 for failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
