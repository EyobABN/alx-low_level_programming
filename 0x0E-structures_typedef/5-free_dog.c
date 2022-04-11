#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees a dogs name and owner storage memories
 * @d: pointer to the dog
 *
 * Return: void
 */
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
