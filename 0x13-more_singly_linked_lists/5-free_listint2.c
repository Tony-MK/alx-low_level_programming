#include <stdlib.h>
#include "lists.h"
/**
 * free_listint2 - Frees a singly linked list from memory
 * @head: Head of the singly linked list
 */
void free_listint2(listint_t *head)
{
	if (head == NULL)
		return;
	else if ((*head).next)
		free_listint((*head).next);
	free(head);
}
