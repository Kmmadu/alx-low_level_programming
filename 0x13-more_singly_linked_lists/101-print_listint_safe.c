#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint_safe - Prints a listint_t linked list safely.
 * @head: A pointer to the head of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
const listint_t *slow = head;
const listint_t *fast = head;
size_t count = 0;
if (head == NULL)
exit(98);
while (fast != NULL && fast->next != NULL)
{
slow = slow->next;
fast = fast->next->next;
printf("[%p] %d\n", (void *)slow, slow->n);
count++;
if (slow == fast)
{
printf("-> [%p] %d\n", (void *)slow, slow->n);
break;
}
}
return (count);
}

