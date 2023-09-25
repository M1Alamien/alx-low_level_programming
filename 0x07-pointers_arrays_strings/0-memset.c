#include "main.h"
/**
 * _memset - name
 * @s: char array from main
 * @b: char from main
 * @n: int from main
 * fills the first n bytes of s with b
 * Return: pointer to s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (*s);
}
