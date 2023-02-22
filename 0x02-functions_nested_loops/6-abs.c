#include "main.h"
#include <stdio.h>

/**
 * main - computes the absolute value of an integer
 *
 * Return: 0
 */
int main(void)
{
	int u;

	u = _abs(-1);
	printf("%d\n", u);
	u = _abs(0);
	printf("%d\n", u);
	u = _abs(1);
	printf("%d\n", u);
	u = _abs(-98);
	printf("%d\n", u);
	return (0);
}
