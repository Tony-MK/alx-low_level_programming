#include "lists.h"

/**
 * add_dnodeint_end - Add a new node at the end of a linked list
 * @head: Pointer to the head of the linked list
 * @n: Integer value to set to the ne node
 * Return: NULL if it failed else address of the new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node = malloc(sizeof(dlistint_t));
	dlistint_t *temp = *head;

	if (node == NULL)
		return (NULL);
	else if (temp)
	{
		while (temp->next)
			temp = temp->next;
		temp->next = node;
		node->prev = temp;
	}
	else
		*head = node;

	node->next = NULL;
	node->n = n;
	return (node);
}
