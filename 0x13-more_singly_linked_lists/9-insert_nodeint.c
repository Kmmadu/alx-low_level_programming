#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at a given position.
 * @head: A pointer to a pointer to the head of the list.
 * @idx: The index at which the new node should be added.
 * @n: The integer value to be stored in the new node.
 *
 * Return: The address of the new node, or NULL if it failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *new_node, *temp;
unsigned int i = 0;
if (head == NULL)
return (NULL);
if (idx == 0)
{
/* If idx is 0, add a new node at the beginning */
new_node = add_nodeint(head, n);
return (new_node);
}
temp = *head;
while (temp != NULL)
{
if (i == idx - 1)
{
/* Create a new node and assign the value n */
new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
return (NULL);
new_node->n = n;
/* Adjust the next pointers to insert the new node */
new_node->next = temp->next;
temp->next = new_node;
return (new_node);
}
temp = temp->next;
i++;
}
/* If idx is out of range, return NULL */
return (NULL);
}

