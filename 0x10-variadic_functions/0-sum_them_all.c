#include <stdio.h>
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
	int sum = 0;
	unsigned int i;
	va_list num;

	if (n == 0)
		return (0);
	va_start(num, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(num, int);
	}
	va_end(num);
	return (sum);
}

