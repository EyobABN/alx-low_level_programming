#include "lists.h"

/**
 * dlistint_len - prints a doubly linked list
 * @h: the head of the list
 *
 * Return: the number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *p = h;
	size_t count = 0;

	if (h == NULL)
		return (0);
	for (; p != NULL; p = p->next)
		count++;
	return (count);
}
