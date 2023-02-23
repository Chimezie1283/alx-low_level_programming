#include "main.h"

/**
 * _isupper - checks for uppercase letters
 * @c: interger to check
 *
 * Return: 1 if true, 0 if otherwise
 */
int _isupper(int c)
{

	if ((c >= 'A') && (c <= 'Z'))

		return (1);

	else
		return (0);
}
