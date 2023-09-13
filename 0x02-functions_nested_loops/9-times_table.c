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
	int tens;
	int ones;
	int r;

	for (i = 0; i <= 9; i++)
	{
		for (c = 0; c <= 9; c++)
		{
			r = i * c;
			if (r > 10)
			{
			ones = r % 10;
			tens = r / 10;
			_putchar('0' + tens);
			_putchar('0' + ones);
			} else
			{
			_putchar('0' + r);
			}
			if (c != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
