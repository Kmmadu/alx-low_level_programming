#include "lists.h"
#include <stdlib.h>

/**
 * free_list - Frees a list_t list.
 * @head: A pointer to the list_t list.
 */
void free_list(list_t *head)
{
list_t *tmp;
while (head)
{
/*Store the next node in a temporary variable.*/
tmp = head->next;
/*Free the string within the current node.*/
free(head->str);
/*Free the current node.*/
free(head);
/* Move to the next node.*/
head = tmp;
}
}

