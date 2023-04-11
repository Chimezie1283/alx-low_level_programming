#include "main.h"

/**
 * get_endianness - A function that checks if a machine is little or big endian
 * Return: 0 for big, 1 for little
 */
int get_endianness(void)
{
	unsigned int m = 1;
	char *s = (char *) &m;

	return (*s);
}
