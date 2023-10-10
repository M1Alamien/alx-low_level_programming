#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - name
 * @d: struct from main
 *
 * frees dogs
 * Return: void
 */
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	d->age = 0.0;
	free(d);
}
