#include "main.h"

/**
 * factorial - A functio that returns the factorial of a given number
 * @n: Factorial source number
 *
 * Return: The factorial of n number
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
