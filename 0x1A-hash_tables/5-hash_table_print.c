#include <stdbool.h>
#include "hash_tables.h"

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
				printf(",");
			printf("\'%s\': \'%s\'", node->key, node->value);
			node = node->next;
			comma = true;
		}
	}
	printf("}\n");
}
