#include "variadic_functions.h"
#include <stdio.h>
#include <stddef.h>
/**
 * _strcmp - name
 * @ch: char from main
 * @s: string from main
 *
 * checks if ch is in s
 * Return: 0 or 1
 */
int _strcmp(char ch, char *s)
{
	int i = 0;

	while (s[i])
	{
		if (ch == s[i])
			return (1);
		i++;
	}
	return (0);
}
/**
 * print_all - name
 * @format: string from main
 *
 * prints anything inputted to func
 * Return: void
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *str, *args = "cifs";
	va_list lst;


	va_start(lst, format);
	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(lst, int));
				break;
			case 'i':
				printf("%d", va_arg(lst, int));
				break;
			case 'f':
				printf("%f", va_arg(lst, double));
				break;
			case 's':
				str = va_arg(lst, char *);
				printf("%s", str ? str : "(nil)");
				break;
			default:
				break;
		}
		i++;
		if (format[i] && _strcmp(format[i], args))
			printf(", ");
	}
	printf("\n");
	va_end(lst);
}
