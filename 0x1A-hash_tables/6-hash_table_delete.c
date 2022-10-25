#include "hash_tables.h"

/**
 * del_node - deletes a linked list
 * @head: singly linked list
 */

void del_node(hash_node_t *head)
{
	hash_node_t *current = head, *tmp;

	if (!head)
		return;

	while (current)
	{
		tmp = current->next;
		free(current->key);
		free(current->value);
		free(current);
		current = tmp;
	}
}



/**
 * hash_table_delete - deletes an hash table
 * @ht: hash table
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;

	if (!ht)
		return;

	for (i = 0; i < ht->size; i++)
		del_node(ht->array[i]);

	free(ht->array);
	free(ht);
}
