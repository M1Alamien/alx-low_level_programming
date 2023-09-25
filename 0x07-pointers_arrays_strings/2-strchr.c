#include "main.h"
/**
 * _strchr - name
 * @s: string from main
 * @c: char from main
 *
 * returns a pointer to the first occurrence
 * of c in s or null
 * Return: s or null
 */
char *_strchr(char *s, char c)
{
	while (s)
	{
		if (s == c)
		return (s);
		else
		n++;
	}
	return (NULL);
}
