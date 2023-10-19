#include "lists.h"
#include <stdio.h>

/**
 * print_list - Prints all the elements of a list_t list.
 * @h: The list_t list.
 *
 * Return: The number of nodes in h.
 */
size_t print_list(const list_t *h)
{
size_t nodes = 0;
/*Check if the input list is NULL*/
if (h == NULL)
{
printf("The list is empty.\n");
return (0);
}
while (h)
{
if (h->str == NULL)
printf("[0] (nil)\n");
else
/*Use %u for unsigned int (len)*/
printf("[%u] %s\n", h->len, h->str);
nodes++;
h = h->next;
}
return (nodes);
}

