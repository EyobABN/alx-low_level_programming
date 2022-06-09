#include "lists.h"

/**
 * sum_dlistint - returns the sum of all data in a dlistint_t
 * @head: the head of the list
 *
 * Return: the sum
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *p = head;
	int sum = 0;

	if (head == NULL)
		return (0);
	for (; p != NULL; p = p->next)
		sum += p->n;
	return (sum);
}
