#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table
 * @size: The size of the array to be created
 *
 * Return: Returns a pointer to new hash table on success or NULL on fail
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *newTable = NULL;

	if (size == 0)
	{
		return (NULL);
	}

	newTable = malloc(sizeof(hash_table_t));

	if (newTable == NULL)
	{
		return (NULL);
	}

	newTable->array = calloc(size, sizeof(hash_node_t *));

	if (newTable->array == NULL)
	{
		free(newTable);
		return (NULL);
	}

	newTable->size = size;

	return (newTable);
}
