#include "lists.h"
#include <string.h>

/**
 * add_node_end - adds new node to the end of the
 * linked list
 * @head: double pointer to the list_t list
 * @str: string to put in new node
 *
 * Return: address of new node or NULL if it fails
 */

list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int len = 0;
	list_t *new;
	list_t *temp;

	while (str[len])
		len++;

	new = malloc(sizeof(list_t));

	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = len;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (temp->next)
		temp = temp->next;
	temp->next = new;


	return (new);
}
