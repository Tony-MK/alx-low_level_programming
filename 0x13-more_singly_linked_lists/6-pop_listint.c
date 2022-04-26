#include <stdlib.h>
#include "lists.h"
/**
 * pop_listint - Removes the head element in a singly linked list
 * @head: Head of the singly linked list
 * Return: Value of head node data
 */
int pop_listint(listint_t **head)
{
	register listint_t *tmp;
	register int n;

	if (head == NULL)
		return (0x0);

	n = (*(*head)).n;
	tmp = *head;
	(*head) = (*(*head)).next;
	free(tmp);
	return (n);
}
