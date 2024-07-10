#include "lists.h"

/**
 * sum_dlistint - Returns the sum of all ints in dlistint_t list
 * @head: The head of the linked list
 *
 * Return: Return the sum on success, 0 on fail
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
	{
		return (0);
	}

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
