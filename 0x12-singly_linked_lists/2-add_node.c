#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - adds a node to the beginning of a list_t list
 * @head: the head of the list_t list
 * @str: the string to be the str element of the new head
 *
 * Return: a pointer to the new list
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	if (head == NULL || str == NULL)
		return (NULL);
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	if (new->str == NULL)
		return (NULL);
	new->len = strlen(new->str);
	new->next = *head;
	*head = new;
	return (*head);
}
