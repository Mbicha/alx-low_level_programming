#include "lists.h"

/**
 *print_listint - Function to return number of node elements
 *@h: linked list head
 *Return: Number of nodes
 */
size_t print_listint(const listint_t *h)
{
    int count = 0;

    while (h)
    {
        count++;
        h = h->next;
    }
    
    return (count);
}
