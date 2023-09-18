#include "main.h"
#include <stdio.h>
/**
 * _puts - name
 * @str: string from main
 *
 * prints string
 * Reutrn: void
 */
void _puts(char *str)
{
	int i;
	for ( i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
