#include <stdlib.h>
#include "main.h"

/**
 * *_realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previsouly allocated by malloc
 * @old_size: size of the allocated memory for ptr
 * @new_size: new size of the new memory block
 *
 * Return: pointer to the newly allocated memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *str1;
	char *old_str;
	unsigned int m;


	if (new_size == old_size)
		return (ptr);


	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	if (!ptr)
		return (malloc(new_size));


	str1 = malloc(new_size);

	if (!str1)
		return (NULL);

	old_str = ptr;

	if (new_size < old_size)
	{
		for (m = 0; m < new_size; m++)
			str1[m] = old_str[m];
	}
	if (new_size > old_size)
	{
		for (m = 0; m < old_size; m++)
			str1[m] = old_str[m];
	}
	free(ptr);

	return (str1);
}
