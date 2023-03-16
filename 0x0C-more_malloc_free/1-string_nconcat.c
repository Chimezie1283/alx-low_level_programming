#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - concatenates n bytes of a string to another string
 * @s1: string to append to
 * @s2: string to concatenate from
 * @n: number of bytes from s2 to concatenate to s1
 *
 * Return: pointer to the resulting string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *t;
	unsigned int m = 0, j = 0, len1 = 0, len2 = 0;


	while (s1 && s1[len1])

		len1++;

	while (s2 && s2[len2])
		len2++;


	if (n < len2)
		t = malloc(sizeof(char) * (len1 + n + 1));

	else
		t = malloc(sizeof(char) * (len1 + len2 + 1));

	if (!t)
		return (NULL);

	while (m < len1)

	{
		t[m] = s1[m];
		m++;
	}
	while (n < len2 && m < (len1 + n))

		t[m++] = s2[j++];


	while (n >= len2 && m < (len1 + len2))

		t[m++] = s2[j++];

	t[m] = '\0';

	return (t);
}
