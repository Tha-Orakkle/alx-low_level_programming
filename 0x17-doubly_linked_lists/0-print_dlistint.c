#include "lists.h"

/**
 * print_dlistint - prints the data of a doubly
 * linked list
 * @h: linked list
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;
	dlistint_t *current = h;

	while (current)
	{
		printf("%d\n", current->n);
		count++;
		current = current->next;
	}
	return (count);
}
