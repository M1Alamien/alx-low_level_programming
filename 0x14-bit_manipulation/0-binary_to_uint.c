#include "main.h"
/**
 * convert_binary_to_base10 - name
 * @n: int
 *
 * converts binary to base 10
 * Return: base 10 dv
 */
unsigned int convert_binary_to_base10(unsigned int n)
{
	unsigned int dv = 0, b = 1, temp = n;

	while (temp)
	{
		int ld = temp % 10;

		temp = temp / 10;
		dv += ld * b;
		b = b * 2;
	}
	return (dv);
}
/**
 * binary_to_uint - name
 * @b: string of binary number
 *
 * converts string to unsigned int
 * Return: 0 or r
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int o = 0, r;

	if (b == NULL)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == '0' || b[i] == '1')
			o = o * 10 + b[i] - '0';
		else
			return (0);
	}
	r = convert_binary_to_base10(o);
	return (r);
}
