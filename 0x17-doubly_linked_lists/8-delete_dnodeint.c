#include "lists.h"

/**
 * dlistint_len - returns number of nodes in a linked list
 * @h: linked list
 *
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	if (!h)
		return (0);
	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}

/**
 * delete_dnodeint_at_index - deletes node of a doubly linked list at a
 * specific index
 * @head: doubly linked list
 * @index: position
 *
 * Return: 1 if succeeded and -1 if otherwise
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head, *backward, *forward;
	unsigned int i;

	if (!head || index >= dlistint_len(current))
		return (-1);

	if (!index)
	{
		forward = current->next;
		if (forward)
			forward->prev = NULL;
		current->next = NULL;
		free(current);
		return (1);
	}

	for (i = 0; i < index; i++)
	{
		backward = current;
		current = current->next;
		forward = current->next;
	}
	backward->next = forward;
	if (forward)
		forward->prev = backward;
	free(current);

	return (1);
}
