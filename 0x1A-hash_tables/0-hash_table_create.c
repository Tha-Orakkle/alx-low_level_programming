#include "hash_tables.h"

/**
 * hash_table_create - creats an hash table
 * @size: size of the array of the hash tablw
 *
 * Return: pointer to the newly created table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *tablei = NULL;

	if (size == 0)
		return (NULL);

	table = malloc(sizeof(hash_table_t));
	if (!table)
		return (NULL);

	table->array = malloc(sizeof(hash_node_t) * size);

	if (!(table->array))
		return (NULL);
	table->size = size;

	return (table);
}
