#include "lists.h"
/**
 * reverse_listint - reverses
 * @head: head
 * Return: ptr
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;

	listint_t *current = *head;

	while (current != NULL)
	{
		listint_t *next_node = current->next;

		current->next = prev;
		prev = current;
		current = next_node;
	}

	*head = prev;
	return (*head);
}
