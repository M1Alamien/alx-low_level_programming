#include "main.h"
#include <string.h>
/**
 * rev_string - name
 * @s: string from main
 *
 * reverses a string
 * Return: void
 */
void rev_string(char *s)
{
	int i;
	int ii;

	if (!s)
	{
		return;
	}
	for (i = 0; s[i] != '\0'; i++)
	{
		ii = i;
	}
	ii = i - 1;
	i = 0;

	while (ii > i)
	{
		char c = s[i];

		s[i] = s[ii];
		s[ii] = c;
		i++;
		ii--;
	}
}
