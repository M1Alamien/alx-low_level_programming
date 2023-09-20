#include "main.h"
/**
 * _strncpy - name
 * @dest: string from main
 * @src: string from main
 * @n: int from main
 *
 * copies n long of src to dest
 * then removes the rest
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
