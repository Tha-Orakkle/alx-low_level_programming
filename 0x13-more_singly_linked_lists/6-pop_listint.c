#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t
 * and returns the head nodes data(n)
 * @head: double pointer to the listint_t
 *
 * Return: the data(n) of the head nodes or 0 if listint_t list is empty
 */

int pop_listint(listint_t **head)
{
	int n;
	listint_t *temp;

	if (head == NULL || *head != NULL)
		return (0);

	n = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (n);
}

