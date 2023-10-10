#include <stdlib.h>
#include <stddef.h>
#include "dog.h"
/**
 * new_dog - name
 * @name: *char from main
 * @age: float from main
 * @owner: *char from main
 *
 * func that creates a new dog
 * Return: void
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	new_dog = malloc(sizeof(dog_t));
	new_dog->name = name;
	new_dog->age = age;
	new_dog->owner = owner;
	return (new_dog);
}
