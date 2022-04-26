#include <stdlib.h>
#include "lists.h"
/**
 * free_listint_safe - Safely frees a singly linked list from memory
 * @h: Head of the singly linked list
 * Return: The size of the list that was free'd
 */
size_t free_listint_safe(listint_t **h)
{
	register listint_t *tmp;
	register size_t size = 0;

	if (!h || !*h)
		return (size);

	while (*h)
	{
		if (*h - (*(*h)).next > 0)
		{
			tmp = (*(*h)).next;
			*h = tmp;
			size++;
			continue;
		}
		*h = NULL;
		size++;
		break;
	}
	*h = NULL;
	return (size);
}
