#ifndef DOG_H
#define DOG_H
/**
 * struct dog - name
 * @name: dog name
 * @owner: owner name
 * @age: dog age
 *
 * Description: name & age & owner name
 */
struct dog
{
	char *name;
	char *owner;
	float age;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
#endif /* DOG_H */
