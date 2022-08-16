#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given index
 * @head: double pointer to the listint_t list
 * @idx: index for the new node
 * @n: value for element n in the new node
 *
 * Return: pointer to new node or NULL if it fails
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *temp1 = *head;
	listint_t *temp2;
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new || !head)
		return (NULL);

	new->n = n;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	for (i = 0; i < idx && temp1; i++)
	{
		temp1 = temp1->next;
	}
	temp2 = temp1->next;
	temp1->next = new;
	new->next = temp2;

	return (new ? new : NULL);
}




