#include <stdio.h>
#include "lists.h"

/**
*print_list - Function that prints all elements
*@h: pointer t head of list
*Return: number of nodes in a list
*/
size_t print_list(const list_t *h)
{
    unsigned int nodes = 0;

    while (h)
    {
        printf("[%u] ", h->len);
        if (h->str == NULL)
            printf("(nill)\n");
        else
            printf("%s\n", h->str);

        h = h->next;
        nodes++;
    }

    return (nodes);
}
