#include "main.h"
/**
 * _strcmp - name
 * @s1: string from main
 * @s2: string from main
 *
 * compares two strings
 * Return: diff between the last compared
 * charecters
 */
int _strcmp(char *s1, char *s2)
{
	while ( *s1 && *s1 == *s2)
	{
		++s1;
		++s2;
	}
	return ((*s1) - (*s2));
}
