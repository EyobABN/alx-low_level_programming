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
	char *n, *o;
	dog_t *n_dog;
	dog_t n_dg;

	n_dog = &n_dg;
	size_name = 0;
	for (i = 0; name[i] != '\0'; i++)
		size_name++;
	size_owner = 0;
	for (i = 0; owner[i] != '\0'; i++)
		size_owner++;
	n = malloc(sizeof(char) * (size_name + 1));
	if (n == NULL)
		return (NULL);
	o = malloc(sizeof(char) * (size_owner + 1));
	if (o == NULL)
		return (NULL);

	for (i = 0; name[i] != '\0'; i++)
		n[i] = name[i];
	n[i] = name[i];
	for (i = 0; owner[i] != '\0'; i++)
		o[i] = owner[i];
	o[i] = owner[i];
	n_dog->name = n;
	n_dog->age = age;
	n_dog->owner = o;
	return (n_dog);
}
