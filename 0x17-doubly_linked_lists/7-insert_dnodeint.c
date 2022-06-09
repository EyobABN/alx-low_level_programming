#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at index idx
 * @h: the head of the dnodeint_t list
 * @idx: the index where the new node is to be inserted
 * @n: the data to be assigned to the new node
 *
 * Return: the address of the new node, or NULL upon failure
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *p = *h, *t, *new;
	unsigned int i = 0, count = 0;

	if (h == NULL)
		return (NULL);
	if (idx == 0)
		return (add_dnodeint(h, n));
	for (; p != NULL; p = p->next)
		count++;
	if (idx > count)
		return (NULL);
	if (idx == count)
		return (add_dnodeint_end(h, n));
	for (p = *h; i < idx - 1; i++)
		p = p->next;
	t = p->next;
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = t;
	new->prev = p;
	p->next = new;
	return (new);
}
