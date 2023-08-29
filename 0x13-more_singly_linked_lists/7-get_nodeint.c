#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: pointer to the node.
 * @index: unsigned integer whose node will be returned.
 *
 * Return: nth node, or NULL if node does not exist.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	while (head && index)
	{
		head = head->next;
		index--;
	}

	if (index == 0)
		return (head);
	else
		return (NULL);
}
