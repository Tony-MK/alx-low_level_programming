#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_listint_safe - Safely Print elements of a linked list
 * @head: Pointer to the head of the singly linked list
 * Return: Number of nodes in the singly linked list
 */
size_t print_listint_safe(const listint_t *head)
{
	register size_t nodes = 0x0;
	register long int s;

	while (head)
	{
		s = head - head->next;
		nodes++;
		printf("[%p] %d\n", (void *)head,  head->n);
		if (s <= 0x00)
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			return (nodes);
		}
		head = (*head).next;
	}
	return (nodes);
}
