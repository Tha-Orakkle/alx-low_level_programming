#include "lists.h"

/**
 * print_list - prints all the element in a linked list
 * @h: pointer to the list_t list to print
 *
 * Return: the number of nodes printed
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		if (!h->n)
			_putchar(NULL);
		else
			printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
