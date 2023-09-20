#include "main.h"
/**
 * cap_string - name
 * @s: string from main
 *
 * capitalizes all words of a string
 * Return: s
 */
char *cap_string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i - 1] == 32 ||
				s[i - 1] == 33 ||
				s[i - 1] == 34 ||
				s[i - 1] == 40 ||
				s[i - 1] == 41 ||
				s[i - 1] == 44 ||
				s[i - 1] == 46 ||
				s[i - 1] == 59 ||
				s[i - 1] == 63 ||
				s[i - 1] == 123 ||
				s[i - 1] == 125 ||
				s[i - 1] == 11 ||
				s[i - 1] == 10)
		{
			if (s[i] > 96 && s[i] < 123)
			{
				s[i] = s[i] - 32;
			}
		}
	}
	return (s);
}
