#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - Adds a new node at the beginning of a list.
 * @head: A pointer to a pointer to the head of the list.
 * @str: The string to be added as the node's value.
 *
 * Return: The address of the new element (node), or NULL if it fails.
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *new_node;
/* Check if the input head and str are not NULL.*/
if (head != NULL && str != NULL)
{
/* Allocate memory for the new node.*/
new_node = malloc(sizeof(list_t));
if (new_node == NULL)
return (NULL);
/* Duplicate the input string and set it as the node's value.*/
new_node->str = strdup(str);
if (new_node->str == NULL)
{
free(new_node);
return (NULL);
}
/* Calculate the length of the string.*/
new_node->len = strlen(str);
/*Set the new node's next pointer to the current head.*/
new_node->next = *head;
/*Update the head pointer to point to the new node, making it the new head.*/
*head = new_node;
return (new_node);
}
return (NULL);
}
/**
 * _strlen - Returns the length of a string.
 * @s: The string to count.
 *
 * Return: The length of the string.
 */
int _strlen(const char *s)
{
int length = 0;
/*Iterate through the string to count its characters.*/
while (*s)
{
s++;
length++;
}
return (length);
}

