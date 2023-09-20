#include "main.h"
/**
 * reverse_array - name
 * @a: array from main
 * @n: lenght of a
 *
 * reverses inputted array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i;
	int temp;

	int j = n - 1;

	for (i = 0; i <= j; i++, j--)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
	}
}
