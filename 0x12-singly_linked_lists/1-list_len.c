#include "lists.h"

/**
*list_len - function to return the number of nodes
*@h: linked list head
*Return: number of nodes as size_t
*/
size_t list_len(const list_t *h)
{
    unsigned int nodes = 0;

    while (h)
    {
        nodes++;
        h = h->next;
    }
    return (nodes);
}
