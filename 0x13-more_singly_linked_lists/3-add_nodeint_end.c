#include "lists.h"
/**
 * add_nodeint_end - add new nodes to the end of the list
 * @head: head
 * @n: int to add
 * Return: adress of new elt
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode, *current;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->next = NULL;

	if (*head == NULL)
	{
		*head = newnode;
		return (*head);
	}
	current = *head;
	while (current->next != NULL)
		current = current->next;
	current->next = newnode;
	return (*head);
}
