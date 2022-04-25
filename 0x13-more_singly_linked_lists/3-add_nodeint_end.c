#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - adds a new node to the end of a listint_t list
 * @head: the head of the listint_t list
 * @n: the value of the new node's property
 *
 * Return: a pointer to the new node, or NULL upon failure
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *p;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
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
