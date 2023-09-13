#include "main.h"
/**
 * print_sign - prints sign of num
 * @n: int from main
 *
 * prints the sign of inputted number
 * Return: depends
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	} else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
		_putchar('0');
		return (0);
}
