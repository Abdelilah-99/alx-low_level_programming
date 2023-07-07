#include "hash_tables.h"
/**
 * hash_table_print - print hash table
 * @ht: hash table
 * Return: nothing if ht empty
*/
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *nd;
	unsigned long int i;
	int flag = 0;

	if (!ht)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		nd = ht->array[i];
		while (nd)
		{
			if (flag == 1)
				printf(", ");
			printf("'%s': '%s'", nd->key, nd->value);
			flag = 1;
			nd = nd->next;
		}
	}
	printf("}\n");
}
