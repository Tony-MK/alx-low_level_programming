#include <stdlib.h>
#include "lists.h"
/**
 * sum_listint - Computes sum of an integer singly linked list
 * @head: Head of the singly linked list
 * Return: Sum of integers
 */
int sum_listint(listint_t *head)
{
	register int sum = 0x00;
	register listint_t *tmp = head;

compute:
	if (tmp == NULL)
		return (sum);

	sum += (*tmp).n;
	tmp = (*tmp).next;
	goto compute;
}
