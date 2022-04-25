#include "lists.h"

/**
 * listint_len - returns the number of elements of a listint_t list
 * @h: the head of the listint_t list
 *
 * Return: the number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;
	const listint_t *p = h;

	for (; p != NULL; p = p->next)
		count++;
	return (count);
}
