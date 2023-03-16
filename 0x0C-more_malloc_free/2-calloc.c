#include <stdlib.h>
#include "main.h"

/**
 * *_memset - fills memory with a constant byte
 * @s: memory area to be filled
 * @b: char to copy
 * @n: number of times to copy b
 *
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int m;


	for (m = 0; m < n; m++)
	{
		s[m] = b;
	}
	return (s);
}


/**
 * *_calloc - allocates memory for an array
 * @nmemb: number of elements in the array
 * @size: size of each element
 *
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *str;


	if (nmemb == 0 || size == 0)
		return (NULL);


	str = malloc(size * nmemb);


	if (str == NULL)
		return (NULL);


	_memset(str, 0, nmemb * size);


	return (str);
}
