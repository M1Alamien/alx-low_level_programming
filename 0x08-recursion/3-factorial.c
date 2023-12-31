#include "main.h"
/**
 * factorial - name
 * @n: int from main
 *
 * returns the factorial of n
 * Return: -1 or 1
 */
int factorial(int n)
{
	if (n == 1 || n == 0)
		return (1);

	else if (n < 0)
		return (-1);

	else
		return (n * factorial(n - 1));
}
