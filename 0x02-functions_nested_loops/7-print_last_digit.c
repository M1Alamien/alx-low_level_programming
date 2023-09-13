#include "main.h"
/**
 * print_last_digit - the name
 * @n: input from main
 *
 * prints the last digit from number
 * Return: always n
 */
int print_last_digit(int n)
{
	n = n % 10;
	if (n < 0)
	{
		n = -n;
	}
	_putchar('0' + n);
	return (n);
}
