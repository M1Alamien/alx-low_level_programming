#include "main.h"
/**
 * _realloc - name
 * @ptr: pointer from main
 * @old_size: int
 * @new_size: int
 *
 * reallocates memory blocks
 * Return: NULL or np
 */
void *_realloc(char *ptr, unsigned int old_size, unsigned int new_size)
{
	char *np;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		np = malloc(new_size);
		return (np);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (new_size > old_size)
	{
		np = malloc(new_size);
		for (i = 0; i < old_size; i++)
			ptr[i] = np[i];

		free(ptr);
	}
	if (new_size < old_size)
	{
		np = malloc(new_size);
		for (i = 0; i < new_size; i++)
			ptr[i] = np[i];

		free(ptr);
	}
	return (np);
}
