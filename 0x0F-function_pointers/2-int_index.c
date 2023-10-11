#include "function_pointers.h"
/**
 * int_index - name
 * @array: array from main
 * @size: int from main
 * @cmp: func from main
 *
 * searches for an integer
 * Return: i or -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, re;

	if (array != NULL && cmp != NULL)
	{
	if (size <= 0)
		return (-1);
		for (i = 0; i < size; i++)
		{
			re = cmp(array[i]);
			if (re != 0)
			{
				return (i);
			}
		}
	}
	return (-1);
}
