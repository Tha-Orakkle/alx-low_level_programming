#include "hash_tables.h"

/**
 * check_key - checks if key already exists
 * @hn: hash node at a specific index
 * @key: key to search for
 *
 * Return: 1 if key exists, otherwise 0
 */

unsigned long int check_key(hash_node_t *hn, const char *key)
{
	while (hn)
	{
		if (strcmp(hn->key, key))
			return (1);
		hn = hn->next;
	}
	return (0);
}

/**
 * add_node - adds a new node to the beginning of the linked list
 * @head: pointer to the linked list
 * @key: new key for the new node
 * @value: new value for the new node
 *
 * Return: address of the new node, or NULL if it fails
 */

hash_node_t *add_node(hash_node_t **head, const char *key, const char *value)
{
	hash_node_t *new_node;

	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
		return (NULL);

	new_node->key = strdup(key);
	new_node->value = strdup(value);

	if (head == NULL)
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
 * hash_table_set - adds an element to the hash table
 * @key: key of the element
 * @value: value associated with key
 *
 * Return: 1 for success, otherwise 0
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx, retval;

	if (!ht || !key || strcmp(key, "") == 0 || !value)
		return (0);

	idx = key_index((unsigned char *)key, ht->size);

	retval = check_key(ht->array[idx], key);
	if (retval == 0)
		add_node(&ht->array[idx], key, value);
	if (&ht->array[idx] == NULL)
		return (0);

	return (1);
}
