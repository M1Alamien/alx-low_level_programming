#include "main.h"
/**
 * is_prime_number - name
 * @n: int from main
 *
 *  returns 1 if the input integer is a prime
 *  number, otherwise return 0
 *  Return: 0 or 1
 */
int is_prime_number(int n)
{
	if (n == 1 || n == 0 || n < 0)
	{
		return (0);
	}
	else
	{
		return (primecalc(n, 2));
	}
}
/**
 * primecalc - name
 * @n: int from main
 * @x: int = 2
 *
 * checks if n is divisible by numbers
 * from 2 to n/2
 * Return: 0 or 1
 */
int primecalc(int n, int x)
{
	if (x >= n)
	{
		return (1);
	}
	else if (n % x == 0)
	{
		return (0);
	}
	else
		return (primecalc(n, x + 1));

}
