#include "hash_tables.h"

/**
 * hash_table_create - creats an hash table
 * @size: size of the array of the hash tablw
 *
 * Return: pointer to the newly created table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *table;

	if (size <= 0)
		return (NULL);

	table = malloc(sizeof(hash_table_t));
	if (!table)
		return (NULL);

	table->size = size;

	table->array = malloc(sizeof(hash_node_t) * size);

	if (table->array == NULL)
	{
		free(table);
		return (NULL);
	}

	for (i = 0; i < size; i++)
		table->array[i] = NULL;

	return (table);
}
