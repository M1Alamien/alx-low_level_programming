#include "main.h"
/**
 * array_range - name
 * @min: int from main
 * @max: int from main
 *
 * creates an array of integers
 * Return: NULL or arr
 */
int *array_range(int min, int max)
{
	int *arr;
	int i, range;

	if (min > max)
	{
		return (NULL);
	}

	range = max - min + 1;
	arr = malloc(range * sizeof(int));
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = min; min <= max; i++, min++)
	{
		arr[i] = min;
	}
	return (arr);
}
