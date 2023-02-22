#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @u: digit to find the last place of and integer
 *
 * Return: Value of the last digit
 */
int print_last_digit(int u)
{

	if (u < 0)
	{
		u = u * -1;
	}

	_putchar((u % 10) + '0');
	return (u % 10);
}
