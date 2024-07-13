#include "hash_tables.h"

/**
 * hash_table_set - Method to add a key/value to a hash table
 * @ht: The hash table to add key/value to
 * @key: The key
 * @value: The value
 *
 * Return: Return 1 on success, 0 on fail
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
    unsigned long int index;
    hash_node_t *newNode, *currentNode;

    if (ht == NULL || key == NULL || value == NULL)
    {
        return (0);
    }
    index = key_index((const unsigned char *)key, ht->size);
    currentNode = ht->array[index];
    while (currentNode != NULL)
    {
        if (strcmp(currentNode->key, key) == 0)
        {
            free(currentNode->value);
            currentNode->value = strdup(value);
            return (1);
        }
        currentNode = currentNode->next;
    }
    newNode = malloc(sizeof(hash_node_t));
    if (newNode == NULL)
    {
        return (0);
    }
    newNode->key = strdup(key);
    if (newNode->key == NULL)
    {
        free(newNode);
        return (0);
    }
    newNode->value = strdup(value);
    if (newNode->value == NULL)
    {
        free(newNode->key);
        free(newNode);
        return (0);
    }
    newNode->next = ht->array[index];
    ht->array[index] = newNode;
    return (1);
}