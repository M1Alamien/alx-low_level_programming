#include "main.h"
/**
 * _puts_recursion - name
 * @s: string from main
 *
 * prints a string followed by a new line
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
		_putchar('\n');

	_putchar(*s);
	*s++;
	_puts_recursion(*s);
}
