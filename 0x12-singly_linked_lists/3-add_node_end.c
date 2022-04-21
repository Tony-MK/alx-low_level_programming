#include<stdlib.h>
#include<string.h>
#include "lists.h"
/**
 * add_node_end - Adds a node to the end of a singly linked list
 * @head: Head of a singly linked list
 * @str: Node string value
 * Return: Pointer to the adderss of the new element. Otherwise, 0.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	register list_t *temp;
	register list_t *node;

	node = malloc(sizeof(list_t));
	if (!(node))
		return (NULL);

	(*node).next = NULL;
	(*node).str = strdup(str);
	if (!((*node).str))
	{
		free(node);
		return (NULL);
	}
	(*node).len = 0x0;
	while (*(str + (*node).len))
		node->len++;

	if (*head == NULL)
	{
		*head = node;
		return (node);
	}

	temp = *head;
	while (temp->next)
		temp = temp->next;

	temp->next = node;
	return (node);
}
