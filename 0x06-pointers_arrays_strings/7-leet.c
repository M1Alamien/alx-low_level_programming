#include "main.h"
/**
 * leet - name
 * @s: string from main
 *
 * encodes string and returns it
 * Return: s
 */
char *leet(char *s)
{
	int i;
	int j;
	char c[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j <= 7; j++)
		{
			if (s[i] == c[j] || s[i] - 32 == c[j])
			{
				s[i] = j + '0';
			}
		}
	}
	return (s);
}
