#include <stdlib.h>
#include "lists.h"
/**
 * get_nodeint_at_index - Gets node by index in a singly linked list
 * @head: Head of the singly linked list
 * @index: The postion of the node from the head
 * Return: A pointer to the node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	register unsigned int offset = 0x00;
get_node:
	if (offset == index)
		return (head);
	else if (head == NULL || offset > index)
		return (NULL);
	offset++;
	head = head->next;
	goto get_node;
}
