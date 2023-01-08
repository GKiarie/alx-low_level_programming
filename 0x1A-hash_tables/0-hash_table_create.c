#include "hash_tables.h"

/**
 * hash_table_create - ftn to create a hash table
 * @size: size of the hash table
 *
 * Return: pter to created hash table
 *       : NULL on failure
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;

	if (!size)
	{
		return (NULL);
	}

	table = malloc(sizeof(hash_table_t));
	if (!table)
	{
		return (NULL);
	}

	table->array = malloc(size * sizeof(hash_node_t *));
	if (!table->array)
	{
		free(table);
		return (NULL);
	}
	table->size = size;
	return (table);
}
