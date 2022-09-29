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
