#include "main.h"
/**
 * _strncpy - name
 * @dest: string from main
 * @src: string from main
 * @n: int from main
 *
 * copies n long of src to dest
 * then removes the rest
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int;

	int j = _strlen(dest);
	int k = _strlen(src);

	if (n < k)
	{
		for (i = 0; i < n; i++)
		{
			dest[i] = src[i];
		}
	}
	else
	{
		for (i = 0; i < k; i++)
		{
			dest[i] = src[i];
		}
	}
	for (; i <= j; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
/**
 * _strlen - name
 * @s: string from main
 *
 * returns lenght of string
 * Return: i
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; ++i)
	{

	}
	return (i);
}
