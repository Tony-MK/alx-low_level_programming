#include <stddef.h>
#include "lists.h"
/**
 * reverse_listint - Reveres an integer singly linked list
 * @head: Pointer to the head of the singly linked list
 * Return: Pointer to the head of the reversed singled linked list
 */
listint_t *reverse_listint(listint_t **head)
{
	register listint_t *tmp = NULL, *tmp2 = NULL;

	while (*head)
	{
		tmp2 = (*(*head)).next;
		(*(*head)).next = tmp;
		tmp = *head;
		*head = tmp2;

	}
	*head = tmp;
	return (*head);
}
