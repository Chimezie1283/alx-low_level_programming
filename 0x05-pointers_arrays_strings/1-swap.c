#include "main.h"

/**
 * swap_int - A function that swaps the values of two integers.
 * @a: integer to swap
 * @b: Another integer to swap
 */
void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}
