#include "main.h"
/**
 * print_square - name
 * @size: int from main
 *
 * prints a square of #'s
 * to the size of size
 * Return: void
 */
void print_square(int size)
{
	int i;
	int ii;

	if (size > 1)
	{
		for (i = 0; i < size; i++)
		{
			for (ii = 0; ii < size; ii++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
	else
	{
		putchar('\n');
	}
}
