#include "main.h"
/**
 * wildcmp - name
 * @s1: string from main
 * @s2: string from main
 *
 * compares two strings if they are identical
 * Return: 1 or 0
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);

	else if (*s2 == '*')
		return (1);

	else if (*s1 != *s2)
		return (0);
	else if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));
	else
		return (0);
}
