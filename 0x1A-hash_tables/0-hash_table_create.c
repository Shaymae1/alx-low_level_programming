#include "hash_tables.h"

/**
 * hash_table_create - create a hash table
 * @size: size of the table
 * Return: Null or ptr
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table = NULL;

	table = malloc(sizeof(hash_table_t));
	if (!table)
		return (NULL);
	table->size = size;
	table->array = malloc(sizeof(hash_node_t *) * size);
	if (!table->array)
	{
		free(table);
		table = NULL;
		return (NULL);
	}
	memset(table->array, 0, size * sizeof(hash_node_t *));
	return (table);
}
