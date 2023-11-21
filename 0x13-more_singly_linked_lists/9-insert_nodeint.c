#include "lists.h"
/**
 * insert_nodeint_at_index - fun that inserts new node
 * @head: head
 * @idx: - index
 * @n: data
 * Return: struct
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *current, *newnode;
	unsigned int i;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	current = *head;
	newnode->n = n;
	for (i = 0; i < idx - 1; i++)
	{
		current = current->next;
	}

	newnode->next = current->next;
	current->next = newnode;

	return (newnode);
}
