#include <stdio.h>

/**
 * main - print numbers of base 10
 * in lower case
 *
 * Return: 0
 */
int main(void)
{
	int n;
	char ch;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}
	putchar('/n');
	return (0);
}
