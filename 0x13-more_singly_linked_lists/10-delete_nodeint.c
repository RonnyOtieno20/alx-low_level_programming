#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - deletes the node at index index of a
 * listint_t list.
 * @head: pointer to the head of the list.
 *@index: index of the node that should be deleted. Index starts at 0.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current = *head, *temp;

	if (!*head)
		return (-1);

	if (index == 0)
	{
		*head = current->next;
		free(current);
		return (1);
	}

	while (--index && current)
		current = current->next;

	if (!current || !current->next)
		return (-1);

	temp = current->next;
	current->next = temp->next;
	free(temp);

	return (1);
}
