#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t list
 * @head: the head of the listint_t
 * @index: the n
 *
 * Return: a pointer to the node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *p;

	unsigned int i, count = 0;

	if (head == NULL)
		return (NULL);
	for (p = head; p != NULL; p = p->next)
		count++;
	if (index >= count)
		return (NULL);
	p = head;
	for (i = 0; i < index; i++)
		p = p->next;
	return (p);
}
