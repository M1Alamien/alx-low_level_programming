#include <stdlib.h>
#include <stddef.h>
#include "dog.h"
/**
 * init_dog - name
 * @d: stucture from main
 * @name: *char from main
 * @age: float from main
 * @owner: *char from main
 *
 * initializes a variable of type struct dog
 * Return: NULL or *d
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->owner = owner;
	d->age = age;
}
