#include "main.h"
/**
 * _sqrt_recursion - name
 * @n: int from main
 *
 * finds nat sqr of n
 * Return: 0 or 1 or -1 or sqr of n
 */
int _sqrt_recursion(int n)
{
	if (n == 0 || n == 1)
	{
		return (n);
	}
	else
	{
		return (squareroot(n, 0));
	}
}
/**
 * squareroot - name
 * @n: int from main
 * @x: int = 0
 *
 * finds sqr of n from 0 to n/2
 * Return: -1 or squareroot of n
 */
int squareroot(int n, int x)
{
	if (x > n / 2)
	{
		return (-1);
	}
	else if (x * x == n)
	{
		return (x);
	}
	else
		return (squareroot(n, x + 1));
}
