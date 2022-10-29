#include "dog.h"
/**
 * free_dog - function that frees dogs.
 * @d: struct to free
 * Return: 0
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d);
}
