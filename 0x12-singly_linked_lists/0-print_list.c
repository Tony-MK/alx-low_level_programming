#include<stdio.h>
#include "lists.h"
/**
 * print_list - Prints element of a list
 * @h: Head of a linked list
 * Return: Size of the linked list
 */
size_t print_list(const list_t *h)
{
	register size_t size = 0;

count:
	if (!(h))
		return (size);

	printf("[%i] %s\n", (*h).str ? h->len : 0, (*h).str ? h->str : "(nil)");
	h = h->next;
	size++;
	goto count;
}
