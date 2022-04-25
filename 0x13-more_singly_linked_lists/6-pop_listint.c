#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - delets the head of a listint_t list
 * @head: the head of the list
 *
 * Return: the head's data, 0 if list is empty
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *firstNode;

	if (head == NULL)
		return (NULL);
	if (**head == NULL)
		return (0);
	firstNode = *head;
	*head = (*head)->next;
	n = firstNode->n;
	free(firstNode);
	return (n);
}
