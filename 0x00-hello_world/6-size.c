#include <stdio.h>
/**
 * main - print the size of various types
 *
 * Return: Always o
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

	printf("size of char: %zu bytes\n", sizeof(a));
	printf("size of int: %zu bytes\n", sizeof(b));
	printf("size of int: %zu bytes\n", sizeof(c));
	printf("size of int: %zu bytes\n", sizeof(d));
	printf("size of float: %zu bytes\n", sizeof(f));
	return (0);
}
