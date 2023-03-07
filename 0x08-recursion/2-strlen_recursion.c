#include "main.h"

/**
 * _strlen_recursion - A function that prints the length of string
 * @s: input
 *
 * Return: The length of string
 */
int _strlen_recursion(char *s)
{
	int lengthof = 0;

	if (*s)
	{
		lengthof++;
		lengthof += _strlen_recursion(s + 1);
	}
	return (lengthof);
}

