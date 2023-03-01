#include "main.h"
#include <stdio.h>

/**
 * print_buffer - A function that prints a buffer
 * @b: buffer
 * @size: size
 *
 * Return: void
 */
void print_buffer(char *b, int size)
{
	int l, m, i;

	l = 0;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	while (l < size)
	{
		m = size - l < 10 ? size - l : 10;
		printf("%08x: ", l);
		for (i = 0; i < 10; i++)
		{
			if (i < m)
				printf("%02x", *(b + l + i));
			else
				printf("  ");
			if (i % 2)
			{
				printf(" ");
			}
		}
		for (i = 0; i < m; i++)
		{
			int c = *(b + l + i);

			if (c < 32 || c > 132)
			{
				c = '.';
			}
			printf("%c", c);
		}
		printf("\n");
		l += 10;
	}
}
