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
	int i, name_size, owner_size;
	dog_t *n_dog;

	if (name == NULL || owner == NULL || age < 0)
		return (NULL);
	n_dog = (dog_t *)malloc(sizeof(*n_dog));
	if (n_dog == NULL)
		return (NULL);
	name_size = 0;
	for (i = 0; name[i] != '\0'; i++)
		name_size++;

	owner_size = 0;
	for (i = 0; owner[i] != '\0'; i++)
		owner_size++;

	n_dog->name = calloc(name_size + 1, sizeof(char));
	if (n_dog->name == NULL)
		return (NULL);

	n_dog->age = age;

	n_dog->owner = calloc(owner_size + 1, sizeof(char));
	if (n_dog->owner == NULL)
		return (NULL);

	for (i = 0; name[i] != '\0'; i++)
		n_dog->name[i] = name[i];
	n_dog->name[i] = name[i];
	for (i = 0; owner[i] != '\0'; i++)
		n_dog->owner[i] = owner[i];
	n_dog->owner[i] = owner[i];

	return (n_dog);
}
