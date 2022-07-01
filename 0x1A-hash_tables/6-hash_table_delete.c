#include "hash_tables.h"
#include <stdio.h>

/**
 * free_list - frees a linked list
 * @head: the head of the list
 *
 * Return void
 */
void free_list(hash_node_t **head)
{
	if (head == NULL || *head == NULL)
		return;
	if ((*head)->next == NULL)
	{
		free((*head)->key);
		free((*head)->value);
		free(*head);
	}
	else
	{
		free_list(&((*head)->next));
		free((*head)->key);
		free((*head)->value);
		free(*head);
	}
}

/**
 * hash_table_delete - deletes a hash table
 * @ht: the hash table
 *
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned int i;

	if (ht == NULL)
		return;
	if (ht->size != 0 && ht->array != NULL)
		for (i = 0; i < ht->size; i++)
			if ((ht->array)[i])
				free_list(&((ht->array)[i]));
	free(ht->array);
	free(ht);
}
