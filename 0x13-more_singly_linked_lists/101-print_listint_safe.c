#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint_safe - prints a listint_t list
 * @head: the head of the loop
 *
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *arr[1024] = { NULL };
	const listint_t *conv, *p = head;
	size_t count = 0;
	int j, i = 0, loop = 0;

	if (head == NULL)
		exit(98);
	for (; p != NULL; p = p->next)
	{
		arr[i++] = p;
		for (j = 0; j < i; j++)
		{
			if (arr[j] != NULL && arr[j] == p->next)
			{
				loop = 1;
				conv = p->next;
				break;
			}
		}
		printf("[%p] %d\n", (void *)p, p->n);
		count++;
		if (loop)
			break;
	}
	if (loop)
		printf("-> [%p] %d\n", (void *)conv, conv->n);
	return (count);
}
