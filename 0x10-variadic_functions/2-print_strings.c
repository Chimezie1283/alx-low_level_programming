#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - Function that prints strings, followed by a new line.
 * @separator: The string to be printed between strings.
 * @n: The number of strings passed to the function.
 * @...: A variable number of strings to be printed.
 *
 * Description: If separator is NULL, it is not printed.
 * If one of the strings if NULL, (nil) is printed instead.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	char *ptr;
	unsigned int digit;

	va_start(strings, n);

	for (digit = 0; digit < n; digit++)
	{
		ptr = va_arg(strings, char *);

		if (ptr == NULL)
			printf("(nil)");
		else
			printf("%s", ptr);

		if (digit != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(strings);
}
