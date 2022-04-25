#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_nodeint_end - Adds node to a singly linked list
 * @h: Head of the singly linked list
 * Return: The number of nodes
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	register listint_t *node;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);

	node->n = n;
	if (*head)
		node->next = (*head);
	else
		*head = node;
	return (node);
}
