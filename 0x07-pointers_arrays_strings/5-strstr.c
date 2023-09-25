#include "main.h"
#include <stddef.h>
/**
 * _strstr - name
 * @haystack: string from main
 * @needle: string from main
 *
 * finds the first occurrence of substring needle in the haystack
 * Return: NULL or haystack from substring
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;
	int k = 0;

	for (i = 0; needle[i]; i++)
	{
		for (j = 0; haystack[j]; j++)
		{
			if(needle[i] == haystack[j])
				k++;
		}
	}
	if (k > 0)
		return (haystack +j - i);
	else
		return (NULL);
}
