#include "lists.h"
#include <stdlib.h>

/**
 * free_list - frees a list_t list
 * @head: the head of the list
 *
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *p;

	if (head == NULL)
		return;
	p = head;
	if (p->next == NULL)
	{
		free(p->str);
		free(p);
		p = NULL;
	}
	else
	{
		free_list(p->next);
		free(p->str);
		free(p);
		p = NULL;
	}
}
