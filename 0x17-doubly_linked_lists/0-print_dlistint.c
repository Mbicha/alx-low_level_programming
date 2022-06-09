#include "lists.h"

/**
 * print_dlistint - Prints all the elements of a double linked list
 * @h: Linked list head
 *
 * Return: Number of nodes (size_t)
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}

	return (count);
}
