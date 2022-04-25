#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints every element of a listint_t list
 * @h: the head of the listint_t list
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;
	const listint_t *p = h;

	for (; p != NULL; p = p->next)
	{
		printf("%d\n", p->n);
		count++;
	}
	return (count);
}
