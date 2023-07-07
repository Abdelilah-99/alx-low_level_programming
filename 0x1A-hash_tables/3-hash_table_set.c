#include "hash_tables.h"
/**
 * hash_table_set - Adds or updates an element in the hash table.
 * @ht: The hash table to add/update the element in.
 * @key: The key associated with the element.
 * @value: The value associated with the element.
 *
 * Return: (1) if it succeeded, (0) otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *n_d = NULL, *tmp = NULL;
	unsigned long int idx;

	if (!ht || !key || *key == '\0')
		return (0);
	idx = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[idx];
	while (tmp != NULL)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			free(tmp->value);
			tmp->value = strdup(value);
			return (1);
		}
		tmp = tmp->next;
	}
	n_d = malloc(sizeof(hash_node_t));
	if (n_d == NULL)
		return (0);
	n_d->key = strdup(key);
	n_d->value = strdup(value);
	if (n_d->key == NULL || n_d->value == NULL)
	{
		free(n_d->key);
		free(n_d->value);
		free(n_d);
		return (0);
	}
	n_d->next = ht->array[idx];
	ht->array[idx] = n_d;
	return (1);
}
