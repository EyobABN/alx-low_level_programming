#include "lists.h"

/**
 * print_dlistint - prints a doubly linked list
 * @h: the head of the list
 *
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *p = h;
	size_t count = 0;

	if (h == NULL)
		return (0);
	for (; p != NULL; p = p->next)
	{
		printf("%d\n", p->n);
		count++;
	}
	return (count);
}
