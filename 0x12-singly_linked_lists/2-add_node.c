#include<stdlib.h>
#include<string.h>
#include "lists.h"
/**
 * add_node - Adds a node to a singly linked list
 * @head: Head of a singly linked list
 * @str: Node string value
 * Return: Pointer to the adderss of the new element. Otherwise, 0.
 */
list_t *add_node(list_t **head, const char *str)
{
	register list_t *node;

	node = malloc(sizeof(list_t));
	if (!(node))
		return (NULL);

	(*node).next = (*head);
	(*node).str = strdup(str);
	(*node).len = 0x0;
	while (*(str + (*node).len))
		(*node).len++;
	(*head) = node;
	return (node);
}
