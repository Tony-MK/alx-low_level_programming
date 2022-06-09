#include "lists.h"

/**
 * get_dnodeint_at_index - Get a node in a linked list by its index position
 * @head: Pointer to the head of the linked list
 * @index: Index position of the node in the linke list
 * Return: NULL, if the node does not exist. Otherwise, the address of the node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *node = head;

	while (index-- && node)
		node = node->next;

	return (node);
}
