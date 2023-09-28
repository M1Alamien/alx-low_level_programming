#include "main.h"
/**
 * _pow_recursion - name
 * @x: int from main
 * @y: int from main
 *
 * calculates x to the power of y
 * Return: result of calc
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	else if (y == 0)
		return (1);

	else
	{
		y--;
		return(x * _pow_recursion(x, y));
	}
}
