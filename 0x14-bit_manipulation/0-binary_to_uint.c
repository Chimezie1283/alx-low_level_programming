#include "main.h"

/**
 * binary_to_uint - A function that converts a binary number to unsigned int
 * @b: A string containing the binary number
 *
 * Return: The converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int j;
	unsigned int deci_value = 0;

	if (!b)
		return (0);

	for (j = 0; b[j]; j++)
	{
		if (b[j] < '0' || b[j] > '1')
			return (0);
		deci_value = 2 * deci_value + (b[j] - '0');
	}

	return (deci_value);
}
