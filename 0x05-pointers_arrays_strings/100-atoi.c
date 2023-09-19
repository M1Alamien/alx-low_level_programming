#include "main.h"
/**
 * _atoi - name
 * @s: string from main
 *
 * converts string to an integer
 * Return: int or 0
 */
int _atoi(char *s)
{
	int i;
	int o = 0;

	for (i = 0; s[i] != '\0'; ++i)
	{
		o = o * 10 + s[i] - '0';
	}
	return (o);
}
