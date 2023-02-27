#include "main.h"

/**
 * _strlen - A function that returns the length of a string.
 * @s: String
 *
 * Return: length
 */
int _strlen(char *s)
{
	int tall = 0;

	while (*s != '\0')
	{
		tall++;
		s++;
	}
	return (tall);
}
