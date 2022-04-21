#include<stddef.h>
#include<stdlib.h>
#include "lists.h"
/**
 * free_list - Frees a singly linked list from memory
 * @head: Pointer to the head of a singly linked list
 */
void free_list(list_t *head)
{
	register list_t *node = head;

	while (node)
	{
		head = (*node).next;
		free((*node).str);
		free(node);
		node = head;
	}
}
