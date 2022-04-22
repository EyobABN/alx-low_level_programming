#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node_end - adds a node to the end of a list_t list
 * @head: the head of the list_t list
 * @str: the str element of the node to be added
 *
 * Return: the address of the new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *p;

	p = *head;
	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	if (str == NULL)
	{
		new->str = strdup("(nil)");
		if (new->str == NULL)
			return (NULL);
		new->len = 0;
	}
	else
	{
		new->str = strdup(str);
		if (new->str == NULL)
			return (NULL);
		new->len = strlen(new->str);
	}
	new->next = NULL;
	if (*head == NULL)
		*head = new;
	else
	{
		while (p->next != NULL)
			p = p->next;
		p->next = new;
	}
	return (*head);
}
