#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: pointer to the head of the list.
 * @idx: index of the list where the new node should be added.
 * @n: integer.
 *
 * if it is not possible to add the new node at the index idx, do
 * not add the new node and return NULL>
 *
 * Return: the address of the new node or NULL if it failed.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node;
	listint_t *current = *head;

	if (!head)
		return (NULL);

	new_node = malloc(sizeof(listint_t));

	if (!new_node)
		return (NULL);

	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;

		return (new_node);
	}

	while (!current)
	{
		free(new_node);
		return (NULL);
	}

	new_node->next = current->next;
	current->next = new_node;

	return (new_node);
}
