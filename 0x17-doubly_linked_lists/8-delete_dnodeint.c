#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes a node in a linked list by its index
 * @head: Pointer to the head of the linked list
 * @idx: Index position of the node in the linked list
 * Return: 1, if succeded. Otherwise, -1 if failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int idx)
{
	dlistint_t *node;

	if (!(head) || !(*head))
		return (-1);

	node = *head;
	if (idx == 0)
	{
		*head = (*head)->next;
		free(node);
		if (*head)
			(*head)->prev = NULL;
		return (1);
	}

	while (idx-- && node->next)
		node = node->next;

	if (idx)
		return (-1);

	node->prev->next = node->next;
	if (node->next)
		node->next->prev = node->prev;
	free(node);
	return (1);
}
