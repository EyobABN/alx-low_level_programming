#include "hash_tables.h"
#include <string.h>

/**
 * hash_table_set - adds an element to the hash table
 * @ht: the hash table
 * @key: the key
 * @value: the value associated with the key
 *
 * Return: 1 upon success, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *p, *n;
	hash_node_t **array = ht->array;

	if (strcmp(key, "") == 0)
		return (0);

	n = malloc(sizeof(hash_node_t));
	if (n == NULL)
		return (0);
	n->key = strdup(key);
	n->value = strdup(value);
	if (n->key == NULL || n->value == NULL)
	{
		free(n);
		return (0);
	}

	index = hash_djb2((const unsigned char *)key) % 1024;
	if (array[index] != NULL)
	{
		p = array[index];
		array[index] = n;
		array[index]->next = p;
	}
	else
	{
		n->next = NULL;
		array[index] = n;
	}
	return (1);
}
