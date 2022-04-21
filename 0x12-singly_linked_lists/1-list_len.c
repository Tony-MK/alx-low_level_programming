#include<stddef.h>
#include "lists.h"
/**
 * list_len - Computes length of singly linked list
 * @h: Head of a singly linked list
 * Return: Lenght of the linked list
 */
size_t list_len(const list_t *h)
{
	register size_t len = 0;
count:
	if (!(h))
		return (len);
	len++;
	h = h->next;
	goto count;
}
