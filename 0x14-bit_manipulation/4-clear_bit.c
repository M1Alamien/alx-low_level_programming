#include "main.h"
/**
 * clear_bit - name
 * @n: pointer to n
 * @index: index
 *
 * sets value of bit @index to 0
 * Return: -1 or 1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i;

	if (index < 64)
	{
		i = 1 << index;
		if (*n & i)
			*n ^= i;
		return (1);
	}
	return (-1);
}
