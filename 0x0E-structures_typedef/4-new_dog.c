#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog
 * @name: name of new dog
 * @age: age of new dog
 * @owner: owner of new dog
 *
 * Return: a pointer to the new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int i, size_name, size_owner;
	dog_t *n_dog;
	dog_t n_dg;

	n_dog = &n_dg;

	size_name = 0;
	for (i = 0; name[i] != '\0'; i++)
		size_name++;

	size_owner = 0;
	for (i = 0; owner[i] != '\0'; i++)
		size_owner++;

	n_dog->name = calloc(size_name + 1, sizeof(char));
	if (n_dog->name == NULL)
		return (NULL);

	n_dog->owner = calloc(size_owner + 1, sizeof(char));
	if (n_dog->owner == NULL)
		return (NULL);

	for (i = 0; name[i] != '\0'; i++)
		n_dog->name[i] = name[i];
	n_dog->name[i] = name[i];
	for (i = 0; owner[i] != '\0'; i++)
		n_dog->owner[i] = owner[i];
	n_dog->owner[i] = owner[i];

	n_dog->age = age;
	return (n_dog);
}
