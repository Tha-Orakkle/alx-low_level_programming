#include "hash_tables.h"

/**
 * key_index - gives the index of key
 * @key: key
 * @size: size of the array of the hash table
 *
 * Return: index at which the key should be stored
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int idx;

	if (!key || size == 0)
		return (0);

	idx = hash_djb2(key);

	return (idx % size);
}
