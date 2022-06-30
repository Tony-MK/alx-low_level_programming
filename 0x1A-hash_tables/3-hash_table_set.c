#include "hash_tables.h"
/**
 * hash_table_set - Adds an element to the has table
 *
 * @ht: Pointer to the hashtable
 * @key: String
 * @value: String
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node, *index_node;

	if (!(key) || !(ht))
		return (0);

	node = malloc(sizeof(hash_node_t));
	if (!(node))
		return (0);

	index_node = *(ht->array + key_index((const unsigned char *)key, ht->size));
	if (index_node)
		node->next = index_node;

	node->value = (char *) value;
	index_node = node;
	return (1);
}
