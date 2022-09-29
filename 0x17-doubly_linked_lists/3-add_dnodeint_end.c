#include "lists.h"

/**
 * add_dnodeint_end - adds new node at the end of a
 * doubly linked list
 * @head: doubly linked list
 * @n: data for new node
 *
 * Return: address of new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *current = *head;
	dlistint_t *new;

	if (!head)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}

	while (current)
		current = current->next;
	current->next = new;
	new->prev = current;

	return (new);
}
