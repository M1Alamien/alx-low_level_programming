#include "main.h"
/**
 * set_bit - name
 * @n: pointer to n
 * @index: index
 * stes value of bit @index to 1
 * Return: -1 or 1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i;

	if (index < 64)
	{
		i = 1 << index;
		*n = (*n | i);
		return (1);
	}
	return (-1);
}
