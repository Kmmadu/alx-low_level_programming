#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the end of a listint_t list.
 * @head: A pointer to a pointer to the head of the list.
 * @n: The integer to add to the new node.
 *
 * Return: The address of the new element, or NULL if it failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *node, *temp;
if (head == NULL)
return (NULL);
node = malloc(sizeof(listint_t));
if (!node)
return (NULL);
node->n = n;
node->next = NULL;
if (*head == NULL)
{
*head = node;
return (node);
}
temp = *head;
while (temp->next != NULL)
temp = temp->next;
temp->next = node;
return (node);
}

