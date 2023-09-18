#include "main.h"
/**
 * rev_string - name
 * @s: string from main
 *
 * reverses a string
 * Return: void
 */
void rev_string(char *s)
{
	char *str_save;
	int i;
	int ii = 0;

	for (i = 0; s[i] != '\0'; i++)
	{

	}
	for (; i >= 0; i--, ii++)
	{
		str_save[ii] = s[i];
	}
	for (; ii >= 0; ii--, i++)
	{
		s[i] = str_save[ii];
	}
}
