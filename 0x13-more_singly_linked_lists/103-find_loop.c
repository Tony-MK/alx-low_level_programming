#include <stdlib.h>
#include "lists.h"
/**
 * find_listint_loop - Finds the loop in a singly linked list
 * @head: Head of the singly linked list
 * Return: A pointer to the node
 */
listint_t *find_listint_loop(listint_t *head)
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
