#include "main.h"
/**
 * puts2 - name
 * @str: string from main
 *
 * prints every other char from string
 * Return: void
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i = i + 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
