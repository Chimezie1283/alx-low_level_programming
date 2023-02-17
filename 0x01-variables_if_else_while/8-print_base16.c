#include <stdio.h>

/**
 * main - print numbers of base 16 in lowercase
 *
 * Return: 0
 */
int main(void)
{
	int n;
	char ch;

	for (n = 0; n < 10; n++)
		putchar((n % 10) + '0');

	for (ch = 'a'; ch <= 'f'; ch++)
		putchar(ch);

	putchar('\n');
	return (0);
}
