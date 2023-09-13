#include "main.h"
/**
 * times_table - table
 *
 * outputs times table
 * Return: void
 */
void times_table(void)
{
	int i;
	int c;
	int r;

	for (i = 0; i <= 9; i++)
	{
		for (c = 0; c <= 9; c++)
		{
			r = i * c;
			_putchar('0' + r);
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
