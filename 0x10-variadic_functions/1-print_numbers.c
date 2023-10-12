#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>
#include "variadic_functions.h"
/**
 * print_numbers - name
 * @separator: char * from main
 * @n: int from main
 *
 * prints numbers followed by a new line
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list pl;
	const char *sep;

	va_start(pl, n);
	sep = separator;

	if (n != 0)
	{
	if (sep == NULL)
		sep = "";
	for (i = 0; i < n; i++)
	{
		if (i + 1 != n)
			printf("%d%s", va_arg(pl, int), sep);
		else
			printf("%d", va_arg(pl, int));
	}
	va_end(pl);
	}
	printf("\n");
}
