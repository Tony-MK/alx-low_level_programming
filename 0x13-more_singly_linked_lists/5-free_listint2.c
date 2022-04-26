#include <stdlib.h>
#include "lists.h"
/**
 * free_listint2 - Frees a singly linked list from memory
 * @head: Head of the singly linked list
 */
void free_listint2(listint_t **head)
{
	register listint_t *tmp, *tmp2;

	if (head == NULL)
		return;

	tmp = (*head)->next;
	while (tmp)
	{
		tmp2 = (*tmp).next;
		free(tmp);
		tmp = tmp2;
	}
	free(*head);

	(*head) = NULL;
}
