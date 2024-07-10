#include "lists.h"

/**
 * insert_dnodeint_at_index - Creates a new node at given index
 * @h: Head of linked list
 * @idx: Index of the linked list, starting at 0
 * @n: Value to be assigned to new node
 *
 * Return: Return new node on success, NULL on fail
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newNode, *currentNode;
	unsigned int i;

	newNode = malloc(sizeof(dlistint_t));

	if (h == NULL || *h == NULL)
	{
		return (NULL);
	}

	if (newNode == NULL)
	{
		return NULL;
	}

	newNode->n = n;
	currentNode = *h;

	if (idx <= 0)
	{
		newNode->next = *h;
		newNode->prev = NULL;
		if (*h != NULL)
		{
			(*h)->prev = newNode;
		}
		*h = newNode;
		return (newNode);
	}

	for (i = 0; i <= idx && currentNode != NULL; i++)
	{
		currentNode = currentNode->next;
	}

	if (currentNode == NULL)
	{
		free(newNode);
		return (NULL);
	}

	if (currentNode->prev != NULL)
	{
		currentNode->prev->next = newNode;
	}
	currentNode->next = newNode;

	return (newNode);
}
