#include "main.h"
/**
 * _strlen - name
 * @s: string from main
 *
 * return the length of string
 * Return: i (lenght of string)
 */
unsigned int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; ++i)
	{

	}
	return (i);
}
/**
 * string_nconcat - name
 * @s1: string from main
 * @s2: string from main
 * @n: int from main
 *
 * concatenates n chars of s2 to s1
 * Return: NULL or pointer to the concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ns;
	unsigned int i, j, tlen = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	tlen += _strlen(s1);
	if (n >= _strlen(s2))
	{
		tlen += _strlen(s2) + 1;
	}
	else
	{
		tlen += n + 1;
	}
	ns = malloc(tlen);
	if (ns == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		ns[i] = s1[i];
	}
	for (j = 0; s2[j] != '\0' && j <= n; j++, i++)
	{
		ns[i] = s2[j];
	}
	ns[i] = '\0';
	return (ns);
}
