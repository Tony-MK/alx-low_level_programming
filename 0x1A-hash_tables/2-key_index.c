#include "hash_tables.h"
/**
 * key_index - Computes the index of a string key in a hash table
 *
 * @key: Unique string key to compute index
 * @size: Size of the hashtable
 * Return: Integer index of the key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) & (size - 1));
}
