#include "lists.h"

/**
 * add_dnodeint - Add a new node at the beginning of a linked list
 * @head: Pointer to the head of the linked list
 * @n: Integer value to set to the ne node
 * Return: NULL if it failed else address of the new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node = malloc(sizeof(dlistint_t));

	if (node == NULL)
		return (NULL);
	node->n = n;
	node->next = *head;
	node->prev = NULL;

	if (*head)
		(*head)->prev = node;
	*head = node;
	return (node);
}
