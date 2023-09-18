#include "main.h"
/**
 * swap_int - name
 * @a: int from main
 * @b: int from main
 *
 * swaps two ints from main
 * using a third int in func
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
