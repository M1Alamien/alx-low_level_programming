#include <stdio.h>
#include "main.h"
/**
 * print_diagsums - name
 * @a: array from main
 * @size: int from main
 *
 * prints the sum of the 2 diags of
 * a square matrix if ints
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i, j;
	sum1 = 0;
	sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 = sum1 + a[i];
		a = a + size;
	}
	a = a - size;
	for (j = 0; j < size; j++)
	{
		sum2 = sum2 + a[j];
		a = a - size;
	}
	printf("%d, %d\n", sum1 , sum2);
}
