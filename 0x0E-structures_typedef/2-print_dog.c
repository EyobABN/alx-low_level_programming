#include "dog.h"

/**
 * print_dog - prints a struct dog
 * @d: pointer to the struct dog
 *
 * Return: void
 */
void print_dog(struct dog *d)
{
	char *n, *o;

	if (d == NULL)
		return;
	n = (d->name == NULL) ? "(nil)" : d->name;
	o = (d->owner == NULL) ? "(nil)" : d->owner;
	printf("Name: %s\nAge: %f\nOwner: %s\n", n, d->age, o);
}
