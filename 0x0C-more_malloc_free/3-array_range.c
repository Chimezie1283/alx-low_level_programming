#include <stdlib.h>
#include "main.h"

/**
 * *array_range - creates an array of integers
 * @min: minimum range of values stored
 * @max: maximum range of values stored and number of elements
 *
 * Return: pointer to the new array
 */
int *array_range(int min, int max)
{
	int *str;
	int m, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;


	str = malloc(sizeof(int) * size);


	if (str == NULL)
		return (NULL);


	for (m = 0; min <= max; m++)

		str[m] = min++;

	return (str);
}
