#include "main.h"
/**
 * string_toupper - name
 * @s: string from main
 *
 * changes all lowercase to uppercase
 * Return: s
 */
char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if ((s[i] > 96) && (s[i] < 123))
		{
			s[i] = s[i] - 32;
		}
	}
	return (s);
}
