#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table to standard output
 * @ht: Hash table to be printed
 */

void hash_table_print(const hash_table_t *ht)
{
    unsigned long int i;
    hash_node_t *currentNode;
    int first = 1;

    if (ht == NULL)
    {
        return;
    }

    printf("{");
    for (i = 0; i < ht->size; i++)
    {
        currentNode = ht->array[i];
        while (currentNode != NULL)
        {
            if (first == 0)
            {
                printf(", ");
            }
            printf("'%s': '%s'", currentNode->key, currentNode->value);
            currentNode = currentNode->next;
            first = 0;
        }
    }
    printf("}\n");
}