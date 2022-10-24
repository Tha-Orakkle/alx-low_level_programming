#include "hash_tables.h"

/**
 * hash_table_get - gets the value associated with a key
 * @ht: table to be looked into
 * @key: key to be searched for
 *
 * Return: value associated with the key, or NULL
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx;
	hash_node_t *tmp = NULL;

	if (!ht || ht->size == 0 || !key || strcmp(key, "") == 0)
		return (NULL);

	idx = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[idx];

	while (tmp)
	{
		if (strcmp(tmp->key, key) == 0)
			return (tmp->value);
		tmp = tmp->next;
	}

	return (NULL);
}
