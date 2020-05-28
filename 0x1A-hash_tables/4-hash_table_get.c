#include "hash_tables.h"

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *head = NULL;

	if (!ht || !key)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	head = ht->array[index];
	while (head)
	{
		if (!strcmp(key, head->key))
		{
			return (head->value);
		}
		head = head->next;
	}
	return (NULL);
}
