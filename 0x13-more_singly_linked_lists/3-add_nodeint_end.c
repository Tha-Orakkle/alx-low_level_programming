#include "lists.h"

/**
 * add_nodeint_end - adds a new node to the end of the listint_t list
 * @head: double pointer to the listint_t list;
 * @n: integer element of the node
 *
 * Return: pointer to the new element, NULL if it fails
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *temp = *head;

	new = malloc(sizeof(listint_t));

	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (!(*head))
	{
		*head = new;
		return (new);
	}

	while (temp->next)
		temp = temp->next;
	temp->next = new;

	return (new);
}
