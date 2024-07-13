#include "hash_tables.h"

/**
 * hash_table_get - Retrieves a value in hash table from given key
 * @ht: The target hash table
 * @key: The key to search for
 *
 * Return: Returns the associated value on success, NULL on fail
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *currentNode;
	unsigned long int index;

	if (ht == NULL || key == NULL)
	{
		return (NULL);
	}

	index = key_index((const unsigned char *)key, ht->size);
	currentNode = ht->array[index];

	while (currentNode != NULL)
	{
		if (strcmp(currentNode->key, key) == 0)
		{
			return (currentNode->value);
		}
		currentNode = currentNode->next;
	}
	return (NULL);
}
