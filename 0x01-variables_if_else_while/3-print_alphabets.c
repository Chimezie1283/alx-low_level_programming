#include <stdio.h>

/**
 * main - prints alphabets in lowercase, and then in uppercase,
 *followed by a new line
 * Return: 0
 */
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	for (ch = 'A'; chh <= 'Z'; ch++)
		putchar(ch);
	putchar("\n");
	return (0);
}
