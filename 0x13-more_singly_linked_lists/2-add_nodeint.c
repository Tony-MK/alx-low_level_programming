#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_nodeint - Adds node to a singly linked list
 * @head: Head of the singly linked list
 * @n: Value of node
 * Return: The number of nodes
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	register listint_t *node;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);

	node->n = n;
	node->next = *head;
	*head = node;
	return (node);
}
