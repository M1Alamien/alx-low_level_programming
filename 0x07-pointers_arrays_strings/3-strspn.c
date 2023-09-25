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
	int i, j;
	unsigned int count = 0;

	while (*s)
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (accept[i] == *s)
			{
				count++;
				break;
			}
			else if (accept[i + 1] == '\0')
				return (count);
		}
		s++;
	}
}
