#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - Frees a listint_t list and sets the head to NULL.
 * @head: A pointer to the head of the list.
 */
void free_listint2(listint_t **head)
{
listint_t *current;
if (head == NULL)
return;
while (*head != NULL)
{
*head = current;
current = (*head)->next;
free(*head);
}
/*Set the head to NULL after freeing the list.*/
*head = NULL;
}

