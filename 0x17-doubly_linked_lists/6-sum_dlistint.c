#include "lists.h"

/**
 * sum_dlistint - calculates sum of all the
 * data (n) of a dlistint_t linked list
 * @head: linked list
 *
 * Return: sum
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (!head)
		return (0);

	while (head)
		sum += head->n;

	return (sum);
}
