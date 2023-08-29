#include "lists.h"

/**
 * reverse_listint - reverses a listint_t list.
 * @head: pointer to the head of the list.
 * you are not allowed to use more than 1 loop.
 * you are not allowed to use malloc, free or arrays.
 * you can only declare a maximum of two variables in your function.
 *
 * Return:a pointer to the first node of the reversed list.
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *current = *head;
	listint_t *next = NULL;

	while (current)
	{
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}

	*head = prev;
	return (*head);
}
