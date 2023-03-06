#include "main.h"

/**
 *_memcpy - A function that copies memory area
 *@dest: Memory where data is stored
 *@src: Memory where data is copied
 *@n: Number of bytes
 *
 *Return: Copied memory with n byte changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int h = 0;
	int i = n;

	for (; h < i; h++)
	{
		dest[h] = src[h];
		n--;
	}
	return (dest);
}
