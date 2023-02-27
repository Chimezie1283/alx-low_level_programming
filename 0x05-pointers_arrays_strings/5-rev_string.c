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
	int otherwise = 0;
	int a;

	while (s[otherwise] != '\0')
	otherwise++;
	for (a = 0; a < otherwise; a++)
	{
		otherwise--;
		back = s[i];
		s[a] = s[otherwise];
		s[otherwise] = back;
	}
}

