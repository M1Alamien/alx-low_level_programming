#include "main.h"
/**
 * _isalpha - checks for letters
 * @c: int from main
 *
 * checks if input is an alphabetic letter
 * or other
 * Return: either 1 or 0
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
