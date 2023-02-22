#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 *@u: value of last digit
 *
 * Return: Value of the last digit
 */
int print_last_digit(int u)
{
	u = u % 10;

	if (u < 0)
		u = -1 * u;

	_putchar('0' + u);
	return (u);
}
