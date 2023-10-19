#include "lists.h"

/**
 * list_len - Counts the number of elements in a linked list.
 * @h: A linked list
 *
 * Return: The number of elements (nodes).
 */
size_t list_len(const list_t *h)
{
size_t elements = 0;
while (h)
{
elements++;
h = h->next;
}
return (elements);
}

