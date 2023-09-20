#include "main.h"
/**
 * _strcat - name
 * @dest: string from main
 * @src: string from main
 *
 * appends the src string to the
 * dest string
 * Return: pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	int i;

	int j = _strlen(dest);

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i + j] = src[i];
	}
	dest[i + j] = '\0';
	return (dest);
}
/**
 * _strlen - name
 * @s: string from main
 *
 * returns the length of string
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
