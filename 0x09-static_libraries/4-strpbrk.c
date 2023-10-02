#include "main.h"
#include <stddef.h>
/**
 * _strpbrk - name
 * @s: string from main
 * @accept: string from main
 *
 * locates the first occurrence in the string s
 * of any bytes in accept
 * Return: s or NULL
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (accept[j] == s[i])
			{
				return (s + i);
			}
		}
	}
	return (NULL);
}
