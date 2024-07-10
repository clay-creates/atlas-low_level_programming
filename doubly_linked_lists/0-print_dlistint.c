#include "lists.h"

/**
 * print_dlisting - prints all of the elements of a d dlistint_t list
 * @h: head of the linked list
 *
 * Return: returns the number of nodes in the linked list
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		counter++;
		h = h->next;
	}
	return (counter);
}