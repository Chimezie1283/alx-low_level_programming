#include "main.h"

/**
 * *_strncat - A function that concatenate two strings
 * using at most n bytes from src
 * @dest: input value
 * @src: input value
 * @n: input value
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int l;
	int m;

	l = 0;
	while (dest[l] != '\0')
	{
		l++;
	}
	m = 0;
	while (m < n && src[m] != '\0')
	{
	dest[l] = src[m];
	l++;
	m++;
	}
	dest[l] = '\0';
	return (dest);
}
