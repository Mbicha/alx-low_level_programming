#include "lists.h"
#include <string.h>

/**
*add_node - founction pointer to add a node in linked list
*@head: double pointer to head of a list
*@str: value of created node
*Return: address of the created element or NULL if failed
*/
/*typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;*/
list_t *add_node(list_t **head, const char *str)
{
    list_t *new_node;
    int length = 0;

    new_node = malloc(sizeof(list_t));
    if (new_node == NULL)
        return (NULL);

    while (str[length])
        length++;

    new_node->len = length;
    new_node->str = strdup(str);

    new_node->next = (*head);

    (*head) = new_node;
    return (new_node);
}
