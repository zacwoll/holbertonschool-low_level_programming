#include "hash_tables.h"

/**
 * hash_table_get - returns a value from a key in hash table
 * @ht: hash table
 * @key: key to search with
 * Return: value or NULL
 */
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
