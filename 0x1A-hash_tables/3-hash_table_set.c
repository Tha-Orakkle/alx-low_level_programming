#include "hash_tables.h"

/**
 * check_key - checks if a key already exists in a linked list
 * @linked_list: linked_list in the hashTable
 * @key: key, a string
 *
 * Return: 1 if key exists, otherwise 0
 */
unsigned long int check_key(hash_node_t *linked_list, const char *key)
{
	while (linked_list)
	{
		if (strcmp(key, linked_list->key) == 0)
			return (1);
		linked_list = linked_list->next;
	}
	return (0);
}

/**
 * add_node - adds a new node to the linked list
 * @head: linked list
 * @key: key of the node
 * @value: value for the new node
 *
 * Return: pointer to the linked list, otherwise NULL
 */

hash_node_t *add_node(hash_node_t **head, const char *key, const char *value)
{
	hash_node_t *new_node;

	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
		return (NULL);
	new_node->key = strdup(key);
	new_node->value = strdup(value);

	if (!head)
	{
		new_node->next = NULL;
		(*head) = new_node;
	}
	else
	{
		new_node->next = (*head);
		(*head) = new_node;
	}

	return (*head);
}



/**
 * replace_node - replaces the value of an existing key
 * @head: linked list
 * @key: key of the node
 * @value: value of the node
 *
 * Return: pointer to the list, otherwise NULL
 */
void replace_node(hash_node_t **head, const char *key, const char *value)
{
	hash_node_t *temp = *head;

	while (temp && strcmp(temp->key, key) != 0)
		temp = temp->next;

	free(temp->value);
	temp->value = strdup(value);
}



/**
 * hash_table_set - adds an element to the hashTable
 * @ht: hashTable
 * @key: key, a string
 * @value: value associated with the key: the data
 *
 * Return: 1 if successful, otherwise 0
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx, key_exist;
	hash_node_t *new_node;

	if (!ht || !key || strcmp(key, "") == 0 || !value)
		return (0);

	idx = key_index((const unsigned char *)key, ht->size);
	key_exist = check_key(ht->array[idx], key);
	if (key_exist == 1)
	{
		replace_node(&ht->array[idx], key, value);
	}
	else
	{
		new_node = add_node(&ht->array[idx], key, value);
		if (!new_node)
			return (0);
	}

	return (1);
}
