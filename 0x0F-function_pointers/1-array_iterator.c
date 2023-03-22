#include "function_pointers.h"
#include <stdio.h>

 /**
 * array_iterator - function that executes a function
 * given as a parameter on each element of an array.
 * @array: array
 * @sizthe: size of the array
 * @action: a pointer to the function you need to use
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int m;

	if (array == NULL || action == NULL)
		return;

	for (m = 0; m < size; m++)
	{
		action(array[m]);
	}
}
