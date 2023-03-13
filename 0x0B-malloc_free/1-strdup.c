#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - A function that duplicates to new memory space location
 * @str: char
 *
 * Return: 0
 */
char *_strdup(char *str)
{
	char *chi;
	int m, p = 0;

	if (str == NULL)
		return (NULL);

	m = 0;

	while (str[m] != '\0')
		m++;

	chi = malloc(sizeof(char) * (m + 1));

	if (chi == NULL)
		return (NULL);

	for (p = 0; str[p]; p++)
		chi[p] = str[p];

	return (chi);
}
