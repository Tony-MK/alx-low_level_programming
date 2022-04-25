#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * listint_len - Computes number of elements in a linked list
 * @h: Head of the singly linked list
 * Return: The number of nodes
 */
size_t listint_len(const listint_t *h)
{
	register size_t n_nodes = 0;

	while (h)
	{
		n_nodes++;
		h = (*h).next;
	}
	return (n_nodes);
}
