#include "hash_tables.h"

/**
 * hash_djb2 - Hash function implementing Dbj2 algorithm
 * @str: String to be translated to hash value
 *
 * Return: Returns the translated hash value
 */

unsigned long int hash_dbj2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}
	return (hash);
}
