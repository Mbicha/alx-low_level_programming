#include "lists.h"

/**
 *listint_len - Function to return number of elements
 *@h: head of linked list
 *Return: Number of elements
 */
size_t listint_len(const listint_t *h)
{
    int count = 0;

    while (h)
    {
        h = h->next;
        count++;
    }
    return (count);
}
