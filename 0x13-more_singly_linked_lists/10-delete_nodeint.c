#include <stdlib.h>

#include "lists.h"
/**
 * delete_nodeint_at_index - Deletes node on index in a singly linked list
 * @head: Pointer to the head of the singly linked list
 * @index: The postion of the node from the head of the singly linked list
 * Return: 1 (Success), -1 (Failed)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	register unsigned int offset = 0x00;
	register listint_t *node, *tmp = *head;
	
	while ((tmp) && (offset++ <= index))
	{
		if (tmp->next && offset-- == index)
		{
			node = tmp->next;
			(*tmp).next = (*node).next;
			free(node);
			return (1);
		}
		tmp = tmp->next;
	}
	return (-1);
}
