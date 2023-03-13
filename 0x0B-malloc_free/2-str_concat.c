#include "main.h"
#include <stdlib.h>

/**
 * str_concat - A function that gets the end of input and add together for size
 * @s1: input one to concat
 * @s2: input two to concat
 *
 * Return: concat of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *conct;
	int m, ci;


	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

		m = ci = 0;

	while (s1[m] != '\0')
		m++;

	while (s2[ci] != '\0')
		ci++;

	conct = malloc(sizeof(char) * (m + ci + 1));

	if (conct == NULL)
		return (NULL);

	m = ci = 0;

	while (s1[m] != '\0')
	{
		conct[m] = s1[m];
		m++;
	}
	while (s2[ci] != '\0')
	{
		conct[i] = s2[ci];
		m++, ci++;
	}
	conct[m] = ('\0)';
	return (conct);
}
