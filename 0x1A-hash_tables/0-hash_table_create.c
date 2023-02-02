#include "hash_tables.h"

/**
 * hash_table_create - creates a hashTable
 * @size: size of the array
 *
 * Return: pointer to the new hashTable
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hashTable = NULL;

	if (size <= 0)
		return (NULL);

	hashTable = malloc(sizeof(hash_table_t));
	if (!hashTable)
		return (NULL);

	hashTable->size = size;
	hashTable->array = malloc(sizeof(hash_node_t) * size);

	if (!hashTable->array)
		return (NULL);

	return (hashTable);
}
