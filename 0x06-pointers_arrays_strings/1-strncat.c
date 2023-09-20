#include "main.h"
/**
 * _strncat - name
 * @dest: string from main
 * @src: string from main
 * @n: int from main
 *
 * takes n amount from src and 
 * puts it the end of dest
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;

	int j = _strlen(dest);

	for (i = 0; i < n; i++)
	{
		dest[i + j] = src[i];
	}
	dest[i + j] = '\0';
	return (dest);
}
/**
 * _strlen - name
 * @s: string form main
 *
 * return the lenght of string
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

