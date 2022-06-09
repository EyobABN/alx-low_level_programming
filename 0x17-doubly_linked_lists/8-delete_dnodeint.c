#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index of a dlistint_t list
 * @head: the head of the dlistint_t list
 * @index: the index to be deleted
 *
 * Return: 1 if successful, -1 upon failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *p, *prv, *del;
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
		if (*head != NULL)
			(*head)->prev = NULL;
	}
	else
	{
		p = *head;
		for (i = 0; i + 1 < index; i++) /* go to the node right before index */
			p = p->next;
		prv = p;
		del = p->next;
		prv->next = del->next;
		(del->next)->prev = prv;
	}
	free(del);
	return (1);
}
