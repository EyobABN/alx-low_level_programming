#include "lists.h"

/**
 * sum_listint - returns the sum of data (n) of a listint_t list
 * @head: the head of the listint_t list
 *
 * Return: the sum of the data, 0 if list is empty
 */
int sum_listint(listint_t *head)
{
	listint_t *p;
	int sum;

	if (head == NULL)
		return (0);
	p = head;
	sum = 0;
	for (; p != NULL; p = p->next)
		sum += p->n;
	return (sum);
}
