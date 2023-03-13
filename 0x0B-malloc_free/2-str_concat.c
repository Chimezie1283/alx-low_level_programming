#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - A function that concatenate two strings
 * @s1: First string
 * @s2: String to add to end of s1
 * @n: Amount of s2 to add to s1
 *
 * Return: pointer to new area in memory, NULL if it fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *chi, *empty;
	unsigned int m, men, p;
	unsigned int size;

	men = 0;
	empty = "";
	if (s1 == NULL)
		s1 = empty;
	if (s2 == NULL)
		s2 = empty;
	while (s1[men] != '\0')
		men++;
	size = (men + n) * sizeof(*chi);
	chi = malloc(size + 1);
	if (chi == NULL)
		return (NULL);
	m = 0;
	while (m < size && s1[m] != '\0')
	{
		chi[m] = s1[m];
		m++;
	}
	p = 0;
	while (m < size && s2[p] != '\0')
	{
		chi[m] = s2[p];
		m++;
		p++;
	}
	chi[m] = '\0';
	return (chi);
}
