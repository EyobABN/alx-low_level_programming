#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer to the head of the list_t list to be printed
 *
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t length;
	const list_t *p;

	length = 0;
	for (p = h; p != NULL; p = p->next)
	{
		if (p->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", p->len, p->str);
		length++;
	}
	return (length);
}
