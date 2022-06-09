#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint_end - adds a new node to the end of a listint_t list
 * @head: the head of the listint_t list
 * @n: the value of the new node's property
 *
 * Return: a pointer to the new node, or NULL upon failure
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *p;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	new->prev = *head;
	if (*head == NULL)
		*head = new;
	else
	{
		p = *head;
		while (p->next != NULL)
			p = p->next;
		p->next = new;
	}
	return (new);
}
