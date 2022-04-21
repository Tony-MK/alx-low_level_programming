#include<stddef.h>
#include "lists.h"
/**
 * add_node - Adds a node to a singly linked list
 * @h: Head of a singly linked list
 * @str: Node string value
 */
list_t add_node(const list_t *h, char *str)
{
	register node *list_t;

	node = malloc(sizeof(list_t));
	if (!(node))
		return (NULL);

	(*node).str = strdup(str);
	if ((*node).str == NULL && str != NULL)
	{
		free(node);
		return (NULL);
	}

transverse:

	if (!(h))
		h = node;
	else if ((*h).next)
	{
		h = h->next;
		goto transverse;
	}
	else
	{
		(*h).next = node;
	}

	(*node).len = 0x0;
	while (*(str + (*node).len))
		(*node).len++;

	return (node);
}
