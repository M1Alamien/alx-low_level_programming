#include "main.h"
/**
 * _strspn - name
 * @s: string from maain
 * @accept: string from main
 *
 * returns the number of bytes in the initial segment
 * of s that consisst only of bytes from accept
 * Return: counter
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	unsigned int count = 0;

	for (j = 0; s[j] != '\0'; j++)
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (accept[i] == s[j])
			{
				count++;
				break;
			}
			else if (accept[i + 1] == '\0')
				return (count);
		}
	}
}
