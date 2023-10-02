#include "main.h"
/**
 * _strcpy - name
 * @dest: string from main
 * @src: string from main
 *
 * copy and paste a string
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; *(src + i) != '\0'; i++)
	{
		*(dest + i) = *(src + i);
	}
	*(dest + i) = '\0';
	return (dest);
}
