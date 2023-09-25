#include "main.h"
/**
 * _memcpy - name
 * @dest: array from main
 * @src: array from main
 * @n: int from main
 * copies n bytes from src to dest
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
