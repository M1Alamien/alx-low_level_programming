#include "variadic_functions.h"
#include <stdio.h>
#include <stddef.h>
/**
 * print_all - name
 * @format: string from main
 *
 * prints anything
 * Return: void
 */
void print_all(const char * const format, ...)
{
	char *str;
	int i;
	float f;
	const char *args;
	va_list lst;

	va_start(lst, format);
	if (format != NULL)
	{
	args = format;
	while (*args)
	{
		switch (*args)
		{
			case 'c':
				i = va_arg(lst, int);
				printf("%c", i);
				break;
			case 'i':
				i = va_arg(lst, int);
				printf("%d", i);
				break;
			case 'f':
				f = (float)va_arg(lst, double);
				printf("%f", f);
				break;
			case 's':
				str = va_arg(lst, char *);
				if (str == NULL)
					printf("(nil)");
				else
					printf("%s", str);
				break;
			default:
				break;
		}
		args++;
		if (*args && (*args == 'c' || *args == 'i' || *args == 'f' || *args == 's'))
			printf(", ");
	}
	}
	printf("\n");
}
