#include "variadic_functions.h"
#include <stdarg.h>


/**
 * sum_them_all - Function that returns the sum of all its paramters.
 * @n: The number of paramters passed to the function.
 * @...: A variable number of paramters to calculate the sum of.
 *
 * Return: If n == 0 - 0.
 * Otherwise - the sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list chi;
	unsigned int m, sum = 0;

	va_start(chi, n);

	for (m = 0; m < n; m++)
		sum += va_arg(chi, int);

	va_end(chi);

	return (sum);
}
