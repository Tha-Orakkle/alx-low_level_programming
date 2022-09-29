#include "lists.h"

/**
 * *get_dnodeint_at_index - gets node at specific index
 * of a doubly linked list
 * @head: linked list
 * @index: index of list
 *
 * Return: nth node, otherwise NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	int i = 0, count = 0;

	if (!head)
		return (NULL);
	while (current)
	{
		count++;
		current = current->next;
	}
	if (index >= count)
		return (NULL);
	while (i <= index)
		head = head->next;

	return (head);
}
