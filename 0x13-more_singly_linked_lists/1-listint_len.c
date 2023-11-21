#include "lists.h"
/**
 * listint_len - no of nodes
 * @h: head
 * Return: no of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
