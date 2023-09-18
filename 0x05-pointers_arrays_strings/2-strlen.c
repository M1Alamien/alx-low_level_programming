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

	for (i = 0; s[i] != '\0'; i++);
	return (i);
}
