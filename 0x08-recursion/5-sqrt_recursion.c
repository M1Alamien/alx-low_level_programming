#include "main.h"

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

int squareroot(int n, int x)
{
	if (x > n / 2)
	{
		return (-1);
	}
	else if ( x * x == n)
	{
		return (x);
	}
	else
		return (squareroot(n, x + 1));
}
