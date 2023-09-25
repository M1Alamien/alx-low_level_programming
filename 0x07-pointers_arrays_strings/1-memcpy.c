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
	while (n)
	{
		dest[n - 1] = src[n-1];
		n--;
	}
	return (dest);
}
