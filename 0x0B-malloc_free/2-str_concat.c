#include "main.h"
#include <stdlib.h>

/**
 * str_concat - A function that get the ends of input and add together for size
 * @s1: input one to concat
 * @s2: input two to concat
 *
 * Return: concat of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *add;
	int m, chi;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)

		s2 = "";

		m = chi = 0;

	while (s1[m] != '\0')
		m++;

	while (s2[chi] != '\0')
		chi++;

	add = malloc(sizeof(char) * (m + chi + 1));

	if (add == NULL)
		return (NULL);

	m = chi = 0;

	while (s1[m] != '\0')
	{
		add[m] = s1[m];
		m++;
	}
	while (s2[chi] != '\0')
	{
		add[m] = s2[chi];
		m++, chi++;
	}
	add[m] = '\0';
	return (add);
}
