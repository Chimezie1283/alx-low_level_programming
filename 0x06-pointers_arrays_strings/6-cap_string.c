#include "main.h"

/**
 * cap_string - A function that capitalizes all words of a string.
 * @str: The string to be capitalized.
 *
 * Return: A pointer to the changed string.
 */
char *cap_string(char *str)
{
	int tall = 0;

	while (str[tall])
	{
		while (!(str[tall] >= 'a' && str[tall] <= 'z'))
			tall++;

		if (str[tall - 1] == ' ' ||
		    str[tall - 1] == '\t' ||
		    str[tall - 1] == '\n' ||
		    str[tall - 1] == ',' ||
		    str[tall - 1] == ';' ||
		    str[tall - 1] == '.' ||
		    str[tall - 1] == '!' ||
		    str[tall - 1] == '?' ||
		    str[tall - 1] == '"' ||
		    str[tall - 1] == '(' ||
		    str[tall - 1] == ')' ||
		    str[tall - 1] == '{' ||
		    str[tall - 1] == '}' ||
		    tall == 0)
			str[tall] -= 32;

		tall++;
	}

	return (str);
}
