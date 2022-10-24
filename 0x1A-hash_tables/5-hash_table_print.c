#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: hash table
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long idx, flag = 1;
	hash_node_t *node;

	if (!ht)
		return;

	printf("{");

	for (idx = 0; idx < ht->size; idx++)
	{
		node = ht->array[idx];
		if (!node)
			continue;
		else
		{
			if (flag == 0)
				printf(", ");
			while (node)
			{
				printf("'%s': '%s'", node->key, node->value);
				if (node->next)
					printf(", ");
				node = node->next;
			}
			flag = 0;
		}
	}

	printf("}\n");
}
