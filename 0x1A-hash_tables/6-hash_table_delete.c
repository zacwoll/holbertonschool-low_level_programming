#include "hash_tables.h"

/**
 * hash_table_delete - frees hash table
 * @ht: hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *node, *del;
	unsigned long int i;

	if (!ht)
		return;

	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node)
		{
			del = node;
			node = node->next;
			free(del->key);
			free(del->value);
			free(del);
		}
	}

	free(ht->array);
	free(ht);
}
