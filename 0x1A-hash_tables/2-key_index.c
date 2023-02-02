#include "hash_tables.h"

/**
 * key_index - gives the index of key
 * @key: key, a string
 * @size: size of the array of the hash table
 *
 * Return: index at which the key wioll be stored
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	if (!key || size == 0)
		return (0);
	index = hash_djb2(key);

	return (index % size);
}
