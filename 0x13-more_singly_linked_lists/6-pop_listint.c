#include "lists.h"

/**
 * pop_listint - deletes a listint_t list.
 * @head: pointer to the head of the list.
 *
 * Return: head node's data (n).
 */

int pop_listint(listint_t **head)
{
	int data;
	listint_t *temp;

	if (!*head)
		return (0);

	temp = *head;
	data = (*head)->n;
	*head = (*head)->next;
	free(temp);

	return (data);
}
