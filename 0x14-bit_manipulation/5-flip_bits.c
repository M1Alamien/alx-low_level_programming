#include "main.h"
/**
 * flip_bits - name
 * @n: int 1
 * @m: int 2
 *
 * calculates num of bits needed to flip
 * to get from a num to another
 * Return: i
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i;

	for (i = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
			i++;
	}
	return (i);
}
