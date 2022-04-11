#include "dog.h"

/**
 * print_dog - prints a struct dog
 * @d: pointer to the struct dog
 *
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
