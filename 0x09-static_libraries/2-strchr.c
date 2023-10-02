#include "main.h"
#include <stddef.h>
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
	int i;

	for (i = 0; s[i] != c && s[i] != '\0'; i++)
		;
	if (s[i] == c)
	{
		return (s + i);
	}
	else
	{
		return (NULL);
	}
}
