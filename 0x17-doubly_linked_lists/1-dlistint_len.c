#include "lists.h"

/**
 * dlistint_len - function to count number of elements
 * @h: Linked list head
 *
 * Return: Number of nodes (size_t)
 */
size_t dlistint_len(const dlistint_t *h)
{
    size_t count = 0;
    while (h != NULL)
    {
        count++;
        h = h->next;
    }
    return (count);
}
