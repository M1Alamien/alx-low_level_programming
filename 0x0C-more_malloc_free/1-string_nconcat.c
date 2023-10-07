#include "main.h"
/**
 * _strlen - name
 * @s: string from main
 *
 * return the length of string
 * Return: i (lenght of string)
 */
int _strlen(char *s)
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
	char *ns, *st = "";
	int i, j, tlen = 0, n1 = n;

	if (s1 == NULL)
	{
		s1 = st;
	}
	if (s2 == NULL)
	{
		s2 = st;
	}
	tlen += _strlen(s1);
	if (n1 >= _strlen(s2))
	{
		tlen += _strlen(s2);
	}
	else
	{
		tlen += n1 + 1;
	}
	ns = malloc(tlen * sizeof(char));
	if (ns == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < _strlen(s1); i++)
	{
		ns[i] = s1[i];
	}
	if (n1 >= _strlen(s2))
	{
		for (j = 0; j < _strlen(s2); j++, i++)
		{
			ns[i] = s2[j];
		}
	}
	else
	{
		for (j = 0; j < n1 + 1; j++, i++)
		{
			ns[i] = s2[j];
		}
	}
	ns[i] = '\0';
	return (ns);
}
