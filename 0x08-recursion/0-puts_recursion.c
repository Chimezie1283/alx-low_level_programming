#include "main.h"

/**
 * _puts_recursion - A function that prints a string
 * @s: The input
 *
 * Return: Always o (Success)
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_putchar_recursion(s + 1);
	}
	else
		_putchar('\n');
}
