#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - frees a listint_t list
 * @head: the head of the list
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	if (head == NULL)
		return;
	if ((*head)->next == NULL)
		free(*head);
	else
	{
		free_listint2(&((*head)->next));
		free(*head);
	}
	*head = NULL;
}
