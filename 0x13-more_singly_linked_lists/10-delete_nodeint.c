#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - deletes the node at index of a listint_t list
 * @head: the head of the listint_t list
 * @index: the index to be deleted
 *
 * Return: 1 if successful, -1 upon failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *p, *prv, *del;
	unsigned int i, count = 0;

	if (head == NULL || *head == NULL)
		return (-1);
	for (p = *head; p != NULL; p = p->next)
		count++;
	if (index >= count)
		return (-1);
	if (index == 0)
	{
		del = *head;
		*head = del->next;
	}
	else
	{
		p = *head;
		for (i = 0; i + 1 < index; i++) /* go to the node right before index */
			p = p->next;
		prv = p;
		del = p->next;
		prv->next = del->next;
	}
	free(del);
	del = NULL;
	return (1);
}
