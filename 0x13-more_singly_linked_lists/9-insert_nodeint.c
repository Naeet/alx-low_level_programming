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

	current = *head;
	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);


	newnode->n = n;

	if (idx == 0)
	{
		newnode->next = current;
		*head = newnode;
		return (*head);
	}
	while (idx > 1)
	{
		current = current->next;
		idx--;
		if (!current)
		{
			free(newnode);
			return (NULL);
		}
	}
	newnode->next = current->next;
	current->next = newnode;

	return (newnode);
}
