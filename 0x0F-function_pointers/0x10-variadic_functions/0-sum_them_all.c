#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>
/**
 * sum_them_all - sum all its parameters
 * @n: args
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;

	int sum;
	unsigned int i;

	if (n == 0)
		return (0);
	sum = 0;
	va_start(ap, n);
		for (i = 0; i < n; i++)
			sum += va_arg(ap, int);
	va_end(ap);
	return (sum);
}
