#include "main.h"
/**
 * get_bit - name
 * @n: int
 * @index: index
 *
 * value of bit @ index
 * Return: -1 or 0 or n & 1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;

	if (index < 64 && n == 0)
		return (0);
	for (i = 0; i < 64; n >>= 1, i++)
	{
		if (index == i)
			return (n & 1);
	}
	return (-1);
}
