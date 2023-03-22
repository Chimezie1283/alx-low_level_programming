#include "function_pointers.h"

 /**
 * int_index - A function that returns index
 * place if comparison = true, else -1
 * @array: The array
 * @size: The size of elements in array
 * @cmp: The pointer to function of one of the 3 in main
 *
 * Return: 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int m;


	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);


	for (m = 0; m < size; m++)
	{
		if (cmp(array[m]))
			return (m);
	}
	return (-1);
}
