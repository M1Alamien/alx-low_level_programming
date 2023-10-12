#include "variadic_functions.h"
#include <stdio.h>
#include <stddef.h>
/**
 * print_strings - name
 * @separator: string from main
 * @n: int from main
 *
 * prints strings then \n
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	const char *sep;

	va_list(sl);

	sep = separator;
	if (sep == NULL)
		sep = "";
	if (n == 0)
		return;
	va_start(sl, n);
	for (i = 0; i < n; i++)
	{
		if (i + 1 != n)
		{
			if (va_arg(sl, char *) == NULL)
				printf("(nil)%s", va_arg(sl, char *), sep);
			else
				printf("%s%s", va_arg(sl, char *), sep);
		}
		else
		{
			if (va_arg(sl, char *) == NULL)
				printf("(nil)\n", va_arg(sl, char *));
			else
				printf("%s\n", va_arg(sl, char *));
		}
	}
	va_end(sl);
}
