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
listint_t *new, *temp, *current;
unsigned int i = 0;
if (head == NULL)
return (NULL);
if (idx == 0)
{
new = add_nodeint(head, n);
return (new);
}
temp = *head;
while (temp != NULL)
{
if (i == idx - 1)
{
new = malloc(sizeof(listint_t));
if (new == NULL)
return (NULL);
new->n = n;
new->next = temp->next;
temp->next = new;
return (new);
}
temp = temp->next;
i++;
}
return (NULL);
}

