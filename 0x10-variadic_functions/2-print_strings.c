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
	char *temp;

	va_list(sl);

	sep = separator;
	if (sep == NULL)
		sep = "";
	if (n != 0)
	{
	va_start(sl, n);
	for (i = 0; i < n; i++)
	{
		temp = va_arg(sl, char *);
		if (i + 1 != n)
		{
			if (temp == NULL)
				printf("(nil)%s", sep);
			else
				printf("%s%s", temp, sep);
		}
		else
		{
			if (temp == NULL)
				printf("(nil)");
			else
				printf("%s", temp);
		}
	}
	}
	printf("\n");
	va_end(sl);
}
