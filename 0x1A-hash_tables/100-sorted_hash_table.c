#include "hash_tables.h"

/**
 * shash_table_create - creates a hash table
 * @size: the size of the array
 *
 * Return: a pointer to the hash table
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_node_t **array;
	shash_table_t *table;

	table = malloc(sizeof(shash_table_t));
	if (table == NULL)
		return (NULL);
	table->size = size;
	array = malloc(sizeof(shash_node_t *) * size);
	if (array == NULL)
	{
		free(table);
		return (NULL);
	}
	table->array = array;
	return (table);
}

/**
 * shash_table_set - adds an element to the hash table
 * @ht: the hash table
 * @key: the key
 * @value: the value associated with the key
 *
 * Return: 1 upon success, 0 otherwise
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int i, index;
	shash_node_t *p, *n;
	shash_node_t **array;

	if (ht == NULL || strcmp(key, "") == 0 || ht->array == NULL)
		return (0);
	for (i = 0; i < ht->size; i++)
		for (p = (ht->array)[i]; p != NULL; p = p->next)
			/* check if key already exists */
			if (strcmp(p->key, key) == 0)
				/* replace old value with new */
			{
				free(p->value);
				p->value = strdup(value);
				return (1);
			}
	array = ht->array;
	n = malloc(sizeof(shash_node_t));
	if (n == NULL)
		return (0);
	n->key = strdup(key);
	n->value = strdup(value);
	if (n->key == NULL || n->value == NULL)
	{
		free(n);
		return (0);
	}
	index = hash_djb2((const unsigned char *)key) % ht->size;
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

/**
 * shash_table_get - retrieves a value associated with a key
 * @ht: the hash table
 * @key: the key
 *
 * Return: the value if found, NULL otherwise
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *p;
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

/**
 * shash_table_print - prints a hash table
 * @ht: the hash table
 *
 * Return: void
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *p;
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

/**
 * shash_table_print_rev - prints a hash table in reverse
 * @ht: the hash table
 *
 * Return: void
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *p;
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

/**
 * free_list - frees a linked list
 * @head: the head of the list
 *
 * Return void
 */
void free_list(shash_node_t **head)
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
 * shash_table_delete - deletes a hash table
 * @ht: the hash table
 *
 * Return: void
 */
void shash_table_delete(shash_table_t *ht)
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
