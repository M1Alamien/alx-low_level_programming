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
 * argstostr - name
 * @ac: int from main
 * @av: string from main
 *
 * concatenates all the arguments of the program
 * Return: av or NULL
 */
char *argstostr(int ac, char **av)
{
	int i,j = 0, tlen = 0;
	char *s;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		tlen = tlen + _strlen(av[i]) + 1;
	}
	s = malloc(tlen);
	if (s == NULL)
	{
		free(s);
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		_strcpy(s + j, av[i]);
		j = j + _strlen(av[i]) + 1;
		s[j - 1] = '\n';
	}
	s[tlen] = '\n';
	s[tlen + 1] = '\0';
	return (s);
}
