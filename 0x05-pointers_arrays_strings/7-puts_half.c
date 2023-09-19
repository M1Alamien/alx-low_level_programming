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
	int i = _strlen(str);

	if (i % 2 != 0)
	{
		i = (i - 1) / 2;
		for (; str[i] != '\0'; ++i)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		i = i / 2;
		for (; str[i] != '\0'; ++i)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
/**
 * _strlen - name
 * @s: string from main
 *
 * return the length of string
 * Return: i (lenght of string)
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; ++i)
	{

	}
	return (i);
}
