#include "lists.h"
/**
 * print_dlistint - Prints the elements of linked list
 * @h: Pointer to the head of the linked list
 * Return: Number of nodes in the linked list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t length = 0x0;
	const dlistint_t *node = h;

	while (node)
	{
		length++;
		printf("%d\n", node->n);
		node = node->next;
	}
	return (length);
}
