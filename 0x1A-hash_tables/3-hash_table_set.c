#include "hash_tables.h"
/**
 * hash_table_set - adding elen=ment
 * @ht: hash table
 * @key: key
 * @value: value
 * Return: 1 or 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *n_d, *crr;

	if (ht == NULL || key == NULL || *key == '\0')
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	n_d = malloc(sizeof(hash_node_t));
	if (n_d == NULL)
		return (0);
	n_d->key = strdup(key);
	if (value != NULL)
		n_d->value = strdup(value);
	else
		n_d->value = NULL;
	n_d->next = NULL;
	if (ht->array[index] == NULL)
		ht->array[index] = n_d;
	else
	{
		crr = ht->array[index];
		while (crr->next != NULL)
			crr = crr->next;
		crr->next = n_d;
	}
	return (1);
}
