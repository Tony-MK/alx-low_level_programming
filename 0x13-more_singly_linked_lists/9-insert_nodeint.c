#include <stdlib.h>
#include "lists.h"
/**
 * insert_nodeint_at_index - Addes node by index in a singly linked list
 * @head: Address to the pointer to the Head of the singly linked list
 * @idx: Index to add new node
 * @n: Integer value for the new node
 * Return: Address of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	register listint_t *tmp, *node = malloc(sizeof(listint_t));
	register unsigned int index = 0x00;

	if (node == NULL)
		return (NULL);
	node->n = n;
	node->next = NULL;
	if (head == NULL)
	{
		if (idx != 0)
		{
			free(node);
			return (NULL);
		}
		(*head) = node;
		return (node);
	}
	tmp = *head;
	while (tmp && index <= idx)
	{
		if (index == idx)
		{
			node->next = tmp->next;
			tmp->next = node;
			return (node);
		}
		tmp = (*tmp).next;
		index++;
	}
	free(node);
	return (NULL);
}
