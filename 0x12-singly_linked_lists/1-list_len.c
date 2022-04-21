#include "lists.h"

/**
 * list_len - returns the number of elements of a list_t list
 * @h: pointer to the head of the list
 *
 * Return: the number of nodes
 */
size_t list_len(const list_t *h)
{
	const list_t *p = h;
	size_t length = 0;

	for (; p != NULL; p = p->next)
	{
		length++;
	}
	return (length);
}
