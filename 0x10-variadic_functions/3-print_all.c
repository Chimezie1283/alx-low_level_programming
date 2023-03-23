#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	int m = 0;
	char *ptr, *pep = "";

	va_list list;

	va_start(list, format);

	if (format)
	{
		while (format[m])
		{
			switch (format[m])
			{
				case 'c':
					printf("%s%c", pep, va_arg(list, int));
					break;
				case 'i':
					printf("%s%d", pep, va_arg(list, int));
					break;
				case 'f':
					printf("%s%f", pep, va_arg(list, double));
					break;
				case 's':
					ptr = va_arg(list, char *);
					if (!ptr)
						ptr = "(nil)";
					printf("%s%s", pep, ptr);
					break;
				default:
					m++;
					continue;
			}
			pep = ", ";
			m++;
		}
	}

	printf("\n");
	va_end(list);
}
