#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: Input string
 *
 * Return: String in reverse
 */
void rev_string(char *s)
{
	char back = s[0];
	int other = 0;
	int i;

	while (s[other] != '\0')
	other++;
	for (i = 0; i < other; i++)
	{
		other--;
		back = s[i];
		s[i] = s[other];
		s[other] = back;
	}
}

