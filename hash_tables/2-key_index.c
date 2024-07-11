#include "hash_tables.h"

/**
 * key_index - Gives the index of a specified key value
 * @key: The key to search for
 * @size: Size of the hash table array
 *
 * Return: Returns the index of key/value pair
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hashValue, keyReturn;

	hashValue = hash_djb2(key);
	keyReturn = hashValue % size;

	return (keyReturn);
}
