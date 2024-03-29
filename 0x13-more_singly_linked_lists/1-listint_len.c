#include "lists.h"

/**
 * listint_len - returns thr number of elements in a listlen_t list
 * @h: pointer to listint_t list
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
