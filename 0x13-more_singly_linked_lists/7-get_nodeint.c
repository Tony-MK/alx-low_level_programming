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
	register listint_t *tmp = head;

get_node:
	if (offset == index)
		return (tmp);
	else if (tmp == NULL || offset > index)
		return (NULL);
	offset++;
	tmp = head->next;
	goto get_node;
}
