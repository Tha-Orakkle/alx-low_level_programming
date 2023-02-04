#include "hash_tables.h"

/**
 * print_node - prints elements of the linked list
 * @head: double pointer to linked list
 */

int print_node(hash_node_t **head)
{
	hash_node_t *temp = *head;
	int flag = 0;

	while (temp)
	{
		printf("'%s': '%s'", temp->key, temp->value);
		if (temp->next)
			printf(", ");
		temp = temp->next;
		flag = 1;
	}
	return (flag);
}


/**
 * check_remaining_data - checks if there are more data ahead
 * @ht: hashTable
 * @idx: current index in table
 *
 * Return: 1 if data exists ahead, otherwise 0
 */

int check_remaining_data(const hash_table_t *ht, unsigned long int idx)
{
	idx++;
	for (; idx < ht->size; idx++)
	{
		if (ht->array[idx])
			return (1);
	}
	return (0);
}

/**
 * hash_table_print - prints a hashTable
 * @ht: hashTable
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	int ret1, ret2;
	hash_node_t *temp;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		temp = ht->array[i];
		ret1 = print_node(&temp);
		ret2 = check_remaining_data(ht, i);
		if (ret1 == 1 && ret2 == 1)
			printf(", ");
	}

	printf("}\n");
}
