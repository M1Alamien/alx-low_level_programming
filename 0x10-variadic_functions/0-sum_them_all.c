#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - name
 * @n: it from main
 *
 * sums all parameters
 * Return: sum or 0
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum = 0;
	va_list num;

	va_start(num, n);
	if (n != 0)
	{
	for (i = 0; i < n; i++)
	{
		sum += va_arg(num, unsigned int);
	}
	}
	return (sum);
}
