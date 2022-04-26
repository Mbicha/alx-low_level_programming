#include "lists.h"

/**
 *add_nodeint - function to add a new node to linked list
 *@head: head of a node
 *@n: value for each node
 *Return: address to new node or Null if failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
    listint_t *new_node;

    new_node = *head;

    *head = malloc(sizeof(listint_t));
    if (!*head)
        return (NULL);
    (*head)->n = n;
    (*head)->next = new_node;
    return (*head);
}
