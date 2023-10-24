#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint - Returns the sum of all the data (n) of a listint_t linked list.
 * @head: A pointer to the head of the list.
 *
 * Return: The sum of all data (n) in the linked list. If the list is empty, return 0.
 */
int sum_listint(listint_t *head)
{
/*initializing the sum to 0.*/
    int sum = 0;
while (head != NULL)
{
/* adding the value of the current node to the sum.*/
sum += head->n;  
/*move to the next node.*/
head = head->next;
}
/* returning the sum of all data (n) in the linked list.*/
return (sum); 
}

