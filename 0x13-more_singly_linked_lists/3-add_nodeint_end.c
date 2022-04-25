#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_nodeint_end - Adds node to the end of a singly linked list
 * @head: Head of the singly linked list
 * @n: Value of node
 * Return: The adress of the new element. Otherwise NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	register listint_t *node, *tmp;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	node->next = NULL;
	if (*head == NULL)
	{
		*head = node;
		return (node);
	}
	tmp = *head;
	while (tmp->next)
		tmp = tmp->next;

	tmp->next = node;
	return (node);
}
