#include "main.h"
/**
 * print_diagonal - name
 * @n: int from main
 * prints diagonal line
 * Return: void
 */
void print_diagonal(int n)
{
	int i;
	int ii;

	if (n > 1)
	{
		for (i = 0; i < n; i++)
		{
			for (ii = 0; ii < i; ii++)
			{
				_putchar(' ');
			}
			_putchar(92);
			_putchar('\n');
		}
	}
	else
	{
	_putchar('\n');
	}
}
