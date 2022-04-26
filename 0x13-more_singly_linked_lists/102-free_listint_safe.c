#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_listint_safe_helper - helper function
 * @p: the head of the list
 * @conv: the start of the loop
 * @count: the count so far
 * @re: boolean for reencountering a pointer
 *
 * Return: void
 */
void free_listint_safe_helper(listint_t *p, listint_t *conv,
		size_t *count, int *re)
{
	if (p == NULL)
		return;
	if (p->next == conv)
		*re += 1;
	if (p->next == NULL || (p->next == conv && *re > 1))
	{
		free(p);
		(*count)++;
	}
	else
	{
		free_listint_safe_helper(p->next, conv, count, re);
		free(p);
		(*count)++;
	}
}
/**
 * free_listint_safe - frees a listint_t list
 * @h: the head of the loop
 *
 * Return: the number of nodes freed in the list
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *arr[1024] = { NULL };
	listint_t *conv = NULL, *p = *h;
	size_t count = 0;
	int j, i = 0, loop = 0, re = 0;

	for (; p != NULL; p = p->next)
	{
		arr[i++] = p;
		for (j = 0; j < i; j++)
		{
			if (arr[j] == p->next)
			{
				loop = 1;
				conv = p->next;
				break;
			}
		}
		if (loop)
			break;
	}
	free_listint_safe_helper(*h, conv, &count, &re);
	*h = NULL;
	return (count);
}
