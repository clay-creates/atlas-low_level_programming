#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the Nth node at given index
 * @head: The head of the linked list
 * @index: The index of linked list, starting at 0
 *
 * Return: Returns 1 on success, -1 on fail
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *currentNode;
	unsigned int i;

	currentNode = *head;

	if (*head == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		*head = (*head)->next;
		if (*head != NULL)
		{
			(*head)->prev = NULL;
		}
		free(currentNode);
		return (1);
	}

	for (i = 0; i < index && currentNode != NULL; i++)
	{
		currentNode = currentNode->next;
	}

	if (currentNode == NULL)
	{
		return (-1);
	}

	if (currentNode->prev != NULL)
	{
		currentNode->prev->next = currentNode->prev;
	}

	if (currentNode->next != NULL)
	{
		currentNode->next->prev = currentNode->prev;
	}

	free(currentNode);
	return (1);
}
