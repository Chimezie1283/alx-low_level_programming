#include "main.h"

/**
 * reverse_array - A function that reverses the content of an array of integers
 * @a: array
 * @n: number of elements of array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int m;
	int f;

	for (m = 0; m < n--; m++)
	{
		f = a[m];
		a[m] = a[n];
		a[n] = f;
	}
}
