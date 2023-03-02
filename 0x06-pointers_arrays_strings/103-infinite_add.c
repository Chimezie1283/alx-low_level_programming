#include "main.h"

/**
 * *infinite_add - A function that adds 2 numbers
 * @n1: text representation of 1st number to add
 * @n2: text representation of 2nd number to add
 * @r: pointer to buffer
 * @size_r: buffer size
 *
 * Return: pointer to calling function
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int overflow = 0, i = 0, k = 0, digits = 0;
	int tal1 = 0, tal2 = 0, temp_tot = 0;

	while (*(n1 + i) != '\0')
		i++;
	while (*(n2 + k) != '\0')
		k++;
	i--;
	k--;
	if (k >= size_r || i >= size_r)
		return (0);
	while (k >= 0 || i >= 0 || overflow == 1)
	{
		if (i < 0)
			tal1 = 0;
		else
			tal1 = *(n1 + i) - '0';
		if (k < 0)
			tal2 = 0;
		else
			tal2 = *(n2 + k) - '0';
		temp_tot = tal1 + tal2 + overflow;
		if (temp_tot >= 10)
			overflow = 1;
		else
			overflow = 0;
		if (digits >= (size_r - 1))
			return (0);
		*(r + digits) = (temp_tot % 10) + '0';
		digits++;
		k--;
		i--;
	}
	if (digits == size_r)
		return (0);
	*(r + digits) = '\0';
	rev_string(r);
	return (r);
}
