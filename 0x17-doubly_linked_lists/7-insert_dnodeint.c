#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts new node at a given position
 * @h: doubly linked list
 * @idx: index of new node
 * @n: data for new node
 *
 * Return: new node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int count = 0, i = 0;
	dlistint_t *current = *h, *temp = *h;
	dlistint_t *new, *forward;

	if (!h)
		return (NULL);

	while (temp)
	{
		count++;
		temp = temp->next;
	}
	if (idx >= count)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	if (!(*h))
	{
		new->next = NULL;
		new->prev = NULL;
		*h = new;
		return (*h);
	}
	while (i < idx)
	{
		current = current->next;
		forward = current->next;
		i++;
	}
	new->next = forward;
	forward->prev = new;
	new->prev = current;
	current->next = new;

	return (new);
}
