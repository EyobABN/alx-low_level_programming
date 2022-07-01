#include "hash_tables.h"
#include <string.h>

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: the hash table
 * @key: the key
 *
 * Return: the value if found, NULL otherwise
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *p;
	unsigned int i;

	if (ht == NULL || ht->size == 0 || ht->array == NULL)
		return (NULL);

	for (i = 0; i < ht->size; i++)
	{
		p = (ht->array)[i];
		if (p != NULL)
			for (; p != NULL; p = p->next)
				if (strcmp(p->key, key) == 0)
					return (p->value);
	}
	return (NULL);
}
