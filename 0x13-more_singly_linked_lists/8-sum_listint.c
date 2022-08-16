#include "lists.h"

/**
 * sum_listint - returns the sum of data n of all nodes
 * @head: pointer to listint_t list
 *
 * Return: sum of data n or 0 if list is empty
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	if (!head)
		return (0);

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
