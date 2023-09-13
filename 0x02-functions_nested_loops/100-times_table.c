#include "main.h"

void print_times_table(int n)
{
	int i;
	int c;
	int tens;
	int ones;
	int r;

	if (n < 15 && n > 0)
	{
	for (i = 0; i <= n; i++)
	{
		for (c = 0; c <= n; c++)
		{
			r = i * c;
			if (r >= 10)
			{
				ones = r % 10;
				tens = r / 10;
				_putchar('0' + tens);
				_putchar('0' + ones);
			}
			else
			{
				if (c != 0)
				{
					_putchar(' ');
				}
				_putchar('0' + r);
			}
			if (c != n)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
	}
}
