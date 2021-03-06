#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list
 * @head: the head of the list
 *
 * Return: a pointer to the head of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev, *nxt;

	if (head == NULL || *head == NULL)
		return (NULL);
	prev = NULL;
	while (1)
	{
		nxt = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		if (nxt == NULL)
			break;
		*head = nxt;
	}
	return (*head);
}
