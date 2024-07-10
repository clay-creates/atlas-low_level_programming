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
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;

	if (h == NULL || *h == NULL || idx == 0)
	{
		newNode->next = *h;
		newNode->prev = NULL;
		if (*h != NULL)
			(*h)->prev = newNode;
		*h = newNode;
		return (newNode);
	}

	currentNode = *h;
	for (i = 0; currentNode != NULL && i < idx - 1; i++)
		currentNode = currentNode->next;

	if (currentNode == NULL || (currentNode->next == NULL && i != idx - 1))
	{
		free(newNode);
		return (NULL);
	}

	if (currentNode->next == NULL)
	{
		newNode->next = NULL;
		newNode->prev = currentNode;
		currentNode->next = newNode;
	}
	else
	{
		newNode->next = currentNode->next;
		newNode->prev = currentNode;
		if (currentNode->next != NULL)
			currentNode->next->prev = newNode;
		currentNode->next = newNode;
	}

	return (newNode);
}
