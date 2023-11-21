#include "lists.h"
/**
 * get_nodeint_at_index - returns nth node
 * @head: head of node
 * @index: nth int to return the data
 * Return: nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current;
	unsigned int i;

	if (head == NULL)
		return (NULL);

	current = head;
	for (i = 0; i < index; i++)
	{
		if (head->next == NULL)
			return (NULL);
		current = current->next;
	}
	if (current)
		return (current);
	else
		return (NULL);

}
