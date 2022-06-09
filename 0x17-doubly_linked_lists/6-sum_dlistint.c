#include "lists.h"

/**
 * sum_dlistint - Comptes sum of all the integer values in a linked list
 * @head: Pointer to the head of the linked list
 * Return: Sum of all integer values
 */
int sum_dlistint(dlistint_t *head)
{
	register int sum = 0x0;
	register dlistint_t *current_node = head;

compute:
	if (!(current_node))
		return (sum);

	sum += current_node->n;
	current_node = current_node->next;
	goto compute;
}
