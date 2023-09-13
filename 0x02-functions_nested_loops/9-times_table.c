#include "main.h"
/**
 * times_table - table
 *
 * outputs times table
 * Return: void
 */
void times_table(void)
{
	int t[] = [0, 1, 2, 3, 4, 5, 6, 7, 8, 9];
	int i;
	int c;
	int r;

	for (i = 0; i <= 9; i++)
	{
		for (c = 0; t[c] != '\0'; c++)
		{
			r = i * t[c];
			_putchar('0' + r);
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
