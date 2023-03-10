#include "main.h"

/**
 * _strspn - Entry point
 * @s: input
 * @accept: input
 *
 * Return: Always 0 (Success)
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int h = 0;
	int j;

	while (*s)
	{
		for (j = 0; accept[j]; j++)
		{
			if (*s == accept[j])
			{
				h++;
				break;
			}
			else if (accept[j + 1] == '\0')
				return (h);
		}
		s++;
	}
	return (h);
}
