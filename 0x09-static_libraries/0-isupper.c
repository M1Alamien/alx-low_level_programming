#include <stdio.h>
#include "main.h"
/**
 * _isupper - upercase
 * @c: int from main
 *
 * checks in uppercase or other
 * Return: 1 or 0
 */
int _isupper(int c)
{
	if (c <= 90 && c >= 65)
	{
		return (1);
	}
	return (0);
}
