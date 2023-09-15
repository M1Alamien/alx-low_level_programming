#include "main.h"
/**
 * more_numbers - 0 to 14
 *
 * prints nums 0 to 14
 * Return: void
 */
void more_numbers(void)
{
	int i;
	int ii;

	for (i = 0; i < 10; i++)
	{
		for (ii = 0; ii <= 14; ii++)
		{
			if (ii > 9)
			{
				_putchar('0' + (ii / 10));
			}
			_putchar('0' + (ii % 10));
		}
		_putchar('\n');
	}
}
