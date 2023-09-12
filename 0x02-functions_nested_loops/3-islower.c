#include "main.h"
/**
 * _islower - checks if its a lower case
 * @c: int from main
 *
 * checks if the input is a lower case letter
 * or otherwise
 * Return: 0 or 1 depending
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	} else
	{
		return (0);
	}
}
