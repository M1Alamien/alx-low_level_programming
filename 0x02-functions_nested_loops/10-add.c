#include "main.h"
/**
 * add - plus
 * @a input from main
 * @b same
 *
 * adds two numbers
 * Return: always 0
 */
int add(int a, int b)
{
	int sum;
	int tens;
	int ones;

	sum = a + b;
	if (sum >= 10)
	{
		tens = sum / 10;
		ones = sum % 10;
		_putchar('0' + tens);
		_putchar('0' + ones);
		_putchar('\n');
		return (void);
	}
	_putchar('0' + sum);
	_putchar('\n');
	return (void);
}
