#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table
 *
 * @size: Size of the hash table array
 * Return: Memory address of the hash table pointer
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;

	ht = malloc(sizeof(hash_table_t));
	if (!(ht))
		return (ht);

	(*ht).size = size;
	(*ht).array = malloc(sizeof(hash_node_t) * size);
	if ((*ht).array)
		return (ht);

	free(ht);
	return (NULL);
}
