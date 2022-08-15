#include "lists.h"
/**
 * add_nodeint - adds a new node to the listint_t list
 * @head\; double pointer to the listint_t list
 * @n: new integer for the integer element of a node
 *
 * Return: poiter to the new node, NULL if it fails
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = (*head);
	(*head) = new;

	return (*head);
}
