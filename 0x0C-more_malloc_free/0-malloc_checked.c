#include "main.h"
/**
 * malloc_checked - name
 * @b: int from main
 *
 * malloc but returns 98 in failure
 * Return: point or 98
 */
void *malloc_checked(unsigned int b)
{
	void *point;

	point = malloc(b);
	if (point == NULL)
	{
		exit(98);
	}
	return (point);
}
