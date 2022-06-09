#include "lists.h"

/**
 * dlistint_len - Find the number of nodes in a linked list
 * @h: Pointer to the head of the linked list
 * Return: Number of nodes in the linked list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t n_nodes = 0x0;
	const dlistint_t *node = h;

	while (node)
	{
		node = node->next;
		n_nodes++;
	}
	return (n_nodes);
}
