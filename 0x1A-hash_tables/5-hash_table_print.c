#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table like a python dict
 * @ht: hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node = NULL;
	unsigned long int i;
	bool comma = false;

	if (!ht)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node)
		{
			if (comma)
				printf(", ");
			printf("\'%s\': \'%s\'", node->key, node->value);
			node = node->next;
			comma = true;
		}
	}
	printf("}\n");
}
