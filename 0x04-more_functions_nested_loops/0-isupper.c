#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @c: Variable text
 *
 * Return: 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		RETURN (1);
	}
	else
	{
		return (0);
	}
}
