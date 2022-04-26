#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * print_listint - Print elements of a linked list
 * @h: Head of the singly linked list
 * Return: The number of nodes
 */
size_t print_listint(const listint_t *h)
{
	register size_t n_nodes = 0;

	while (h)
	{
		printf("%d\n", h->n);
		n_nodes++;
		h = (*h).next;
	}
	return (n_nodes);
}
