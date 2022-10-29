#include "dog.h"
/**
 * init_dog - a function that initializes a variable of type struct dog
 * @d: struct name
 * @age: age
 * @owner: owner
 * @name: name
 * Return: 0
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		d = malloc(sizeof(struct dog));
		if (d == NULL)
			return;
	}

	d->name = name;
	d->age = age;
	d->owner = owner;
}
