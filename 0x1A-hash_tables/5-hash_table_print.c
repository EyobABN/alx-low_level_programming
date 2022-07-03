#include "hash_tables.h"
#include <stdio.h>

/**
 * hash_table_print - prints a hash table
 * @ht: the hash table
 *
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *p;
	unsigned int i, first = 1;

	if (ht == NULL)
		return;
	putchar('{');
	if (ht->size != 0 && ht->array != NULL)
		for (i = 0; i < ht->size; i++)
		{
			p = (ht->array)[i];
			if (p != NULL)
			{
				for (; p != NULL; p = p->next)
				{
					if (first)
						first = 0;
					else
						printf(", ");
					printf("'%s': '%s'", p->key, p->value);
				}
			}
		}
	printf("}\n");
}
