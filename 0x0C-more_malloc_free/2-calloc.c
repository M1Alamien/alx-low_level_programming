#include "main.h"
/**
 * _memset - name
 * @s: char array from main
 * @b: char from main
 * @n: int from main
 * fills the first n bytes of s with b
 * Return: pointer to s
 */
char *_memset(char *s, char b, unsigned int n)
{
	for (; n; n--)
	{
		s[n - 1] = b;
	}
	return (s);
}
/**
 * _calloc - name
 * @nmemb: int from main
 * @size: int from main
 *
 * allocates memory for an array with memory set to 0
 * Return: NULL or ptr
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	_memset(ptr, 0, (nmemb * size));
	return (ptr);
}
