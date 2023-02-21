#include "main"

/**
 * _isalpha - function that checks for alphabetic character
 * @c: letter, lowercase or uppercase
 *
 * Return: 1 if lowercase or uppercase, 0 if otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);

	else
		return (0);
}
