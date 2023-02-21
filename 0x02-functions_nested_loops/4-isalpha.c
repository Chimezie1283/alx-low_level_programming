#include "main"

/**
 * _isalpha - function that checks for alphabetic character
 * @c: letter, lowercase or uppercase
 *
 * Return: 1 for letter, 0 if otherwise
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}


		return (0);
}
