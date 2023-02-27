#include "main.h"

/**
 * print_array - A function that prints n elements of an array
 * @a: array name
 * @n: is the number of elements OF the array to be printed
 *
 * Return: a and n inputs
 */
void print_array(int *a, int n)
{
	int m;

	for (m = 0; m < (n - 1); m++)
	{
		printf("%d, ", a[m]);
	}
		if (m == (n - 1))
		{
			printf("%d", a[n - 1]);
		}
			printf("\n");
}

