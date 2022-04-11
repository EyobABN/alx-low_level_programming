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
	char *name_cpy, *owner_cpy;
	dog_t *n_dog;

	n_dog = (dog_t *)malloc(sizeof(*n_dog));
	if (n_dog == NULL)
		return (NULL);
	name_size = 0;
	for (i = 0; name[i] != '\0'; i++)
		name_size++;
	owner_size = 0;
	for (i = 0; owner[i] != '\0'; i++)
		owner_size++;
	name_cpy = calloc(name_size + 1, sizeof(char));
	if (name_cpy == NULL)
		return (NULL);
	owner_cpy = calloc(owner_size + 1, sizeof(char));
	if (owner_cpy == NULL)
		return (NULL);
	for (i = 0; name[i] != '\0'; i++)
		name_cpy[i] = name[i];
	name_cpy[i] = name[i];
	for (i = 0; owner[i] != '\0'; i++)
		owner_cpy[i] = owner[i];
	owner_cpy[i] = owner[i];

	n_dog->name = calloc(name_size + 1, sizeof(char));
	if (n_dog->name == NULL)
		return (NULL);
	n_dog->age = age;
	n_dog->owner = calloc(owner_size + 1, sizeof(char));
	if (n_dog->owner == NULL)
		return (NULL);

	for (i = 0; name[i] != '\0'; i++)
		n_dog->name[i] = name_cpy[i];
	n_dog->name[i] = name_cpy[i];
	free(name_cpy);
	for (i = 0; owner[i] != '\0'; i++)
		n_dog->owner[i] = owner_cpy[i];
	n_dog->owner[i] = owner_cpy[i];
	free(owner_cpy);
	return (n_dog);
}
