#include "hash_tables.h"

/**
 * hash_table_create - creats an hash table
 * @size: size of the array of the hash tablw
 *
 * Return: pointer to the newly created table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table = NULL;

	if (size <= 0)
		return (NULL);

	table = malloc(sizeof(hash_table_t));
	if (!table)
		return (NULL);

	table->size = size;

	table->array = calloc((size_t)table->size, sizeof(hash_node_t));

	if (!(table->array))
	{
		free(table);
		return (NULL);
	}

	return (table);
}
