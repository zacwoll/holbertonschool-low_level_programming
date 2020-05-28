#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "hash_tables.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    hash_table_t *ht;

    ht = hash_table_create(1024);
    hash_table_set(ht, "betty", "holberton");
	hash_table_set(ht, "hetairas", "foo");
	hash_table_set(ht, "mentioner", "bar");
	hash_table_set(ht, "hetairas", "floof");
	return (EXIT_SUCCESS);
}
