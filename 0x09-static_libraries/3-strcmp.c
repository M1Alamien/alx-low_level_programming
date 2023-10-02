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
	int i;

	for (i = 0; s1[i] && s1[i] == s2[i]; ++i)
	{

	}
	return ((s1[i]) - (s2[i]));
}
