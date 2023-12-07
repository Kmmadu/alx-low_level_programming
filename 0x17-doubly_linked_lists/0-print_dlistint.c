#include "lists.h"

/**
 * print_ all the elements
 * dlistint_t list
 *
 *@h: head of he the list
 *Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int count;

	count = 0;

	if (h == NULL)
		return (count);

	while (h->prev != NULL)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}

	return (count);

}
