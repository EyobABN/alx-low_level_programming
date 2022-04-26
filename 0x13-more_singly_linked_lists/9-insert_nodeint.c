#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: the head of the listint_t list
 * @idx: the index where the new node is to be added
 * @n: the data for the new index
 *
 * Return: the address of the new node, or NULL upon failure
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *p = *head;
	unsigned int i, count = 0;

	if (head == NULL)
		return (NULL);
	for (; p != NULL; p = p->next)
		count++;
	if (idx > count)
		return (NULL);
	p = *head;
	for (i = 0; i < idx; i++)
		p = p->next;
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (*head == NULL)
	{
		p = new;
		p->next = NULL;
	}
	else
	{
		new->next = p->next;
		p->next = new;
	}
	return (new);
}
