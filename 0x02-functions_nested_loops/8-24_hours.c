#include "main.h"
/**
 * jack_bauer - the day 24
 *
 * prints every minute of the day in 24h fromat
 * Return: void
 */
void jack_bauer(void)
{
	for (x = 0; x <= 2; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			for (z = 0; z <= 5; z++);
			{
				for (s = 0; s <= 9; s++)
				{
					if (x = 0 || (x = 1 && y <= 2) || (x = 2 && y <= 3))
					{
						_putchar('0' + x);
						_putchar('0' + y);
						_putchar(':');
						_putchar('0' + z);
						_putchar('0' + s);
						_putchar('\n');
					}
				}
			}
		}
	}
}
