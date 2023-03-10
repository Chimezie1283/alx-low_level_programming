#include "main.h"

/**
 * *_strcat - A function that concatenates two strings
 * @dest: input value
 * @src: input value
 *
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
	int l;
	int m;

	l = 0;
	while (dest[l] != '\0')
	{
		l++;
	}
	m = 0;
	while (src[m] != '\0')
	{
		dest[l] = src[m];
		l++;
		m++;
	}

	dest[l] = '\0';
	return (dest);
}
