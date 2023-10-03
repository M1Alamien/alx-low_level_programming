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
 * _strdup - name
 * @str: string from main
 *
 * returns a pointer to a copy
 * of the parameter string
 * Return: NULL or pointer to s
 */
char *_strdup(char *str)
{
	int i, len;
	char *s;

	if (str == NULL)
	{
		return (NULL);
	}
	len = _strlen(str) + 1;
	s = (char *) malloc(len);
	if (s == NULL)
	{
		free(s);
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		s[i] = str[i];
	}
	s[i] = '\0';
	if (s == NULL)
	{
		return (NULL);
	}
	return (s);
}
