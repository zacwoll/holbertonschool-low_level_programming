#include "hash_tables.h"

/**
 * shash_table_create - Create a hash table
 * @size: the size of the hash tables
 * Return: ptr to new hash table
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *ht;

	ht = malloc(sizeof(shash_table_t));
	if (!ht)
		return (NULL);
	ht->size = size;
	ht->array = calloc(size, sizeof(shash_node_t *));
	if (!ht->array)
	{
		free(ht);
		return (NULL);
	}

	return (ht);
}

/**
 * new_node - allocates a new shash_node_t node
 * @key: the key
 * @value: the value
 * Return: ptr to the node or NULL
 */
shash_node_t *new_node(const char *key, const char *value)
{
	shash_node_t *node;

	node = calloc(1, sizeof(shash_node_t));
	if (!node)
		return (NULL);
	node->key = strdup(key);
	if (!node->key)
	{
		free(node);
		return (NULL);
	}
	node->value = strdup(value);
	if (!node->value)
	{
		free(node->key);
		free(node);
		return (NULL);
	}

	return (node);
}

/**
 * shash_table_insert - sorted inserts the node into the hash table
 * @ht: hash table
 * @node: node to be sort inserted
 */
void shash_table_insert(shash_table_t *ht, shash_node_t *node)
{
	shash_node_t *shead;

	if (!ht)
		return;
	shead = ht->shead;
	/* when the node belongs at index 0 */
	if (!shead || strcmp(node->key, shead->key) < 0)
	{
		node->snext = shead;
		ht->shead = node;
		if (shead)
			shead->sprev = node;
		else
			ht->stail = node;
		return;
	}
	/* move to where the next node is a greater ascii value */
	while (shead->snext && strcmp(node->key, shead->snext->key) > 0)
		shead = shead->snext;

	node->sprev = shead;
	node->snext = shead->snext;
	if (shead->snext)
		shead->snext->sprev = node;
	else
		/* This is the new tail */
		ht->stail = node;
	shead->snext = node;
}

/**
 * shash_table_set - adds an element to a hash table
 * @ht: hash table
 * @key: key
 * @value: value
 * Return: 1 on success, 0 otherwise
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *new = NULL, *head = NULL;
	unsigned long int index;
	char *new_value;

	if (!ht || !key)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	/* if key exists, update the value */
	head = ht->array[index];
	while (head)
	{
		if (!strcmp(key, head->key))
		{
			new_value = strdup(value);
			if (!new_value)
				return (0);
			free(head->value);
			head->value = new_value;
			return (1);
		}
		head = head->next;
	}
	/* create a new hash node for the data */
	new = new_node(key, value);
	if (!new)
		return (0);
	/* insert node into array */
	new->next = ht->array[index];
	ht->array[index] = new;
	/* order the data into the array */
	shash_table_insert(ht, new);
	return (1);
}

/**
 * shash_table_get - returns a value from a key in hash table
 * @ht: hash table
 * @key: key to search with
 * Return: value or NULL
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index;
	shash_node_t *head = NULL;

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

/**
 * shash_table_print - prints a hash table like a python dict
 * @ht: hash table
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *node = NULL;
	bool comma = false;

	if (!ht)
		return;

	printf("{");
	node = ht->shead;
	while (node)
	{
		if (comma)
			printf(", ");
		printf("\'%s\': \'%s\'", node->key, node->value);
		node = node->snext;
		comma = true;
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - prints a hash table in reverse
 * @ht: hash table
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *node = NULL;
	bool comma = false;

	if (!ht)
		return;

	printf("{");
	node = ht->stail;
	while (node)
	{
		if (comma)
			printf(",");
		printf("\'%s\': \'%s\'", node->key, node->value);
		node = node->sprev;
		comma = true;
	}
	printf("}\n");
}

/**
 * shash_table_delete - frees hash table
 * @ht: hash table
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *node, *del;
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
