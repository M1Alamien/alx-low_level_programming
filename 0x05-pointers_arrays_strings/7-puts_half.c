#include <string.h>
#include "main.h"
/**
 * puts_half - name
 * @str: string from main
 *
 * prints last half of string
 * Return: void
 */
void puts_half(char *str)
{
	int i;
	int ii;

	for (i = 0; str[i] != '\0'; i++)
	{

	}
	if (i % 2 != 0)
	{
		i = (i - 1) / 2;
		for (;str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		i = i / 2;
		for (;str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
