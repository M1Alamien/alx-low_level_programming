#include "main.h"
#include <stddef.h>
/**
 * _strcmp - name
 * @s1: string from main
 * @s2: string from main
 *
 * compares two strings
 * Return: diff between the last compared
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] && s1[i] == s2[i]; ++i)
	{

	}
	return ((s1[i]) - (s2[i]));
}
/**
 * _strstr - name
 * @haystack: string from main
 * @needle: string from main
 *
 * finds the first occurrence of substring needle in the haystack
 * Return: NULL or haystack from substring
 */
char *_strstr(char *haystack, char *needle)
{
	int i;

	for (; *haystack; haystack++)
	{
		if(*needle == *haystack)
		{
			if (!_strcmp(haystack, needle))
			return (haystack);
		}
	}
		return (NULL);
}
