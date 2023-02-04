#include "hash_tables.h"

/**
 * linked_list_delete - deletes a linked list
 * @head: pointer to linked list
 */

void linked_list_delete(hash_node_t **head)
{
	hash_node_t *temp, *current = *head;

	if (!head)
		return;

	while (current)
	{
		temp = current->next;
		free(current->key);
		free(current->value);
		current->next = NULL;
		free(current);
		current = temp;
	}
}


/**
 * hash_table_delete - deletes a hashTable
 * @ht: hashTable
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;

	if (!ht)
		return;

	for (i = 0; i < ht->size; i++)
		linked_list_delete(&ht->array[i]);

	free(ht->array);
	free(ht);
}
