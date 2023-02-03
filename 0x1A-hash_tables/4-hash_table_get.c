#include "hash_tables.h"

/**
 * hash_table_get - retrieves the value associated with a key
 * @ht: hashTable
 * @key: key to check for
 *
 * Return: the value, otherwise NULL if key could not be found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx;
	hash_node_t *temp;
	char *val = NULL;

	if (!ht || !key || strcmp(key, "") == 0)
		return (NULL);

	idx = key_index((const unsigned char *) key, ht->size);
	temp = ht->array[idx];

	while (temp)
	{
		if (strcmp(temp->key, key) == 0)
			val = strdup(temp->value);
		temp = temp->next;
	}

	return (val);
}
