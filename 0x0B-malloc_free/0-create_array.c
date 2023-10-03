#include "main.h"
/**
 * create_array - name
 * @size: int from main
 * @c: char from mian
 *
 * creates an array of chars
 * and initialzes it with c
 * Return: NULL or pointer to string
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	if (size <= 0)
	{
		return (NULL);
	}
	str = (char *) malloc(size);
	if (str == NULL)
	{
		free(str);
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		str[i] = c;
	}
	str[i] = '\0';
	return (str);
}
