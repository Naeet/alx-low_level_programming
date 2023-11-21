#include "lists.h"
/**
 * pop_listint - del head node and
 * @head: head of node
 * Return: head node's data
 */
int pop_listint(listint_t **head)
{
	int i;
	listint_t *current;

	if (head == NULL)
		return (0);
	current = *head;
	if (*head)
	{
		i = current->n;
		*head = current->next;
		free(current);
	}
	else
		i = 0;
	return (i);
}
