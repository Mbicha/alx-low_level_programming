#include "lists.h"
#include <string.h>

/**
*add_node_list - adds node element to the end
*@head: head of a linked list
*@str: string value of added element
*Return: pointer to element or NULL if failed
*/
list_t *add_node_end(list_t **head, const char *str)
{
    list_t *new_node_end, *temp;
    int length = 0;

    new_node_end = malloc(sizeof(list_t));
    if (new_node_end == NULL)
        return (NULL);

    while (str[length])
        length++;
    
    new_node_end->len = length;
    new_node_end->str = strdup(str);
    if (*head == NULL)
    {
        new_node_end->next = *head;
        *head = new_node_end;
    }
    else
    {
        new_node_end->next = NULL;
        temp = *head;
        while (temp->next)
            temp = temp->next;
        
        temp->next = new_node_end;
    }
    return (new_node_end);
}
