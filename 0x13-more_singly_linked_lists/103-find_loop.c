#include "lists.h"

/**
 * find_listint_loop - finds where a loop starts in a listint_t list
 * @head: the head of the list
 *
 * Return: the starting node of the loop, or NULL if there is none
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *f = head, *s = head;

	if (head == NULL)
		return (NULL);
	while (1)
	{
		f = f->next->next;
		s = s->next;
		if (f == NULL || s == NULL)
			return (NULL);
		if (f == s)
			break;
	}
	s = head;
	while (f != s)
	{
		f = f->next;
		s = s->next;
	}
	return (f);
}
