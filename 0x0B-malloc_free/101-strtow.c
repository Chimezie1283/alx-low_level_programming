#include "main.h"
#include <stdlib.h>

/**
 * wrdcnt - A function that counts the number of words in a string
 * @s: string to count
 *
 * Return: int of number of words
 */
int wrdcnt(char *s)
{
	int j, n = 0;

	for (j = 0; s[j]; j++)
	{
		if (s[j] == ' ')
		{
			if (s[j + 1] != ' ' && s[j + 1] != '\0')
				n++;
		}
		else if (j == 0)
			n++;
	}
	n++;
	return (n);
}

/**
 * strtow - splits a string into words
 * @str: string to split
 *
 * Return: pointer to an array of strings
 */
char **strtow(char *str)
{
	int p, j, k, l, n = 0, wc = 0;
	char **q;

	if (str == NULL || *str == '\0')
		return (NULL);

	n = wrdcnt(str);

	if (n == 1)
		return (NULL);

	q = (char **)malloc(n * sizeof(char *));

	if (q == NULL)
		return (NULL);

	q[n - 1] = NULL;

	p = 0;

	while (str[p])
	{
		if (str[p] != ' ' && (p == 0 || str[p - 1] == ' '))
		{
			for (j = 1; str[p + j] != ' ' && str[p + j]; j++)

			j++;

			q[wc] = (char *)malloc(j * sizeof(char));
			j--;
			if (q[wc] == NULL)
			{
				for (k = 0; k < wc; k++)
					free(q[k]);
				free(q[n - 1]);
				free(q);
				return (NULL);
			}
			for (l = 0; l < j; l++)
				q[wc][l] = str[p + l];
			q[wc][l] = '\0';
			wc++;
			p += j;
		}
		else
			p++;
	}
	return (q);
}
