#include "main.h"
/**
 * print_rev - name
 * @s: string from main
 *
 * prints a string in reverse
 * Return: 0
 */
void print_rev(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{

	}
	for (; i > 0; --i)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
