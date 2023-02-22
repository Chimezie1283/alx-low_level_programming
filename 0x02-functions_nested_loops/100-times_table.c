#include "main.h"

/**
 * print_times_table - prints times table
 * @n: The multiplication request
 *
 * Return: void
 */
void print_times_table(int n)
{
	int a, b, chi;

	if (!(n > 15 || n < 0))
	{
		for (a = 0; a <= n; a++)
		{
			for (b = 0; b <= n; b++)
			{
				chi = (a * b);
				if (b != 0)
				{
					_putchar(',');
					_putchar(' ');
				}
				if (chi < 10 && b != 0)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar((chi % 10) + '0');
				}
				else if (chi >= 10 && chi < 100)
				{
					_putchar(' ');
					_putchar((chi / 10) + '0');
					_putchar((chi % 10) + '0');
				{
				else if (chi >= 100 && b != 0)
				{
					_putchar((chi / 100) + '0');
					_putchar((chi / 10) % 10 + '0');
					_putchar((chi % 10) + '0');
				}
				else
					_putchar((chi % 10) + '0');
			}
				_putchar('\n');
			}
			
		}
	}
}
