#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node of a given index
 * @head: double pointer to the listint_t list
 * @index: index of the node to be deleted
 *
 * Return: 1 or -1 if it fails
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp1 = *head;
	listint_t *delnode;
	listint_t *temp2;

	if (!head)
		return (-1);

	for (i = 0; i <= index && temp1; i++)
	{
		if (!temp1 || !temp1->next)
			return (-1);
		if (i == index)
		{
			delnode = temp1;
		}
		if (i == index - 1)
		{
			temp2 = temp1;
		}
		temp1 = temp1->next;
	}
	temp2->next = delnode->next;
	free(delnode);

	return (1);
}
