#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint - Returns the sum of all the data
 * @head: A pointer to the head of the list.
 *
 * Return: Sum of all data (n) in linked list.
 */
int sum_listint(listint_t *head)
{
/* Initializing the sum to 0. */
int sum = 0;
listint_t *value = head;
while (value != NULL)
{
/* Adding the value of the current node to the sum. */
sum += value->n;
/* Move to the next node. */
value = value->next;
}
/* Returning the sum of all data (n) in the linked list. */
return (sum);
}

