#include "main.h"
/**
 * print_line - name
 * @n: int from main
 *
 * prints a line of underscores
 * Return: void
 */
void print_line(int n)
{
	int i;

	if (n > 1)
	{
		for (i = 0; i < n; i++)
		{
			_putchar(95);
		}
	}
	_putchar('\n');
}
