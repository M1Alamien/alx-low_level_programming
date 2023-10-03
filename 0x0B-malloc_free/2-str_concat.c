#include "main.h"
/**
 ** _strlen - name
 ** @s: string from main
 **
 ** return the length of string
 ** Return: i (lenght of string)
 **/
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; ++i)
	{

	}
	return (i);
}
/**
 * str_concat - name
 * @s1: string from main
 * @s2: string from main
 *
 * concatenates two strings
 * Return: pointer to concatenated string or NULL
 */
char *str_concat(char *s1, char *s2)
{
	int j, len, i = 0;
	char *str;
	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	len = _strlen(s1) + _strlen(s2) + 1;
	str = (char *) malloc(len);
	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		str[i] = s1[i];
	}
	for (j = 0; s2[j] != '\0'; i++, j++)
	{
		str[i] = s2[j];
	}
	str[i] = '\0';
	return (str);
}
