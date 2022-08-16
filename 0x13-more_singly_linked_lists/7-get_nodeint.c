#include "lists.h"

/**
 * get_nodeint_at_index - gets the nth node of a listint_t list
 * @head: pointer to the listint_t list
 * @index: index of the nth node to return
 *
 *Return: the nth node or NULL if node does not exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	int i;
	listint_t *temp;

	if (!head)
		return (NULL);

	for (i = 0; i < index && temp; i++)
	{
		temp = temp->next;
	}

	return (temp ? temp : NULL);
}
