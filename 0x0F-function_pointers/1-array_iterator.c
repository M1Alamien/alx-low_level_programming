#include "function_pointers.h"
/**
 * array_iterator - name
 * @array: array from main
 * @size: size_t from main
 * @action: function from main
 *
 * executes a func given as a parameter
 * on each element of array
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
