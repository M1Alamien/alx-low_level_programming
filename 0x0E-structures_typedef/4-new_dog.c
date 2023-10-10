#include <stdlib.h>
#include <stddef.h>
#include "dog.h"
/**
 * _strlen - name
 * @s: string from main
 *
 * return the length of string
 * Return: i (lenght of string)
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; ++i)
	{

	}
	return (i);
}
/**
 * _strcpy - name
 * @dest: string from main
 * @src: string from main
 *
 * copy and paste a string
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; *(src + i) != '\0'; i++)
	{
		*(dest + i) = *(src + i);
	}
	*(dest + i) = '\0';
	return (dest);
}
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
	int lenname, lenowner;

	lenname = _strlen(name);
	lenowner = _strlen(owner);

	new_dog = malloc(sizeof(dog_t));
	new_dog->name = malloc((lenname + 1));
	if (new_dog->name == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}
	new_dog->age = age;
	new_dog->owner = malloc((lenowner + 1));
	if (new_dog->owner == NULL)
	{
		free(new_dog->owner);
		free(new_dog);
		return (NULL);
	}
	_strcpy(new_dog->owner, owner);
	_strcpy(new_dog->name, name);
	return (new_dog);
}
