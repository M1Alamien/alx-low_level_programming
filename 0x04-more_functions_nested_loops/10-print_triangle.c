#include "main.h"
/**
 * print_triangle - name
 * @size: int from main
 *
 * prints a triangle to size of size
 * Return: void
 */
void print_triangle(int size)
{
	int i;
	int ii;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (ii = size - i; ii > 0; ii--)
			{
				_putchar(' ');
			}
			for (ii = 0; ii < i; ii++)
			{
				_putchar(35);
			}
			if (i == size)
			{
				continue;
			}
			_putchar('\n');
		}
	}
	_putchar('\n');
}
