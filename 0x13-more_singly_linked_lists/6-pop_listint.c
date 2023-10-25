#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t list.
 * @head: A pointer to the head of the list.
 * Return: The data (n) of the deleted head node.
 */
int pop_listint(listint_t **head)
{
listint_t *temp;
int value = 0;
if (head != NULL && *head != NULL)
{
temp = *head;
value = temp->n;
*head = (*head)->next;
free(temp);
}
return (value);
}

