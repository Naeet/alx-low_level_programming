#include "lists.h"
/**
 * free_listint - free
 * @head: head
 */
void free_listint(listint_t *head)
{
	if (head == NULL)
		return;
	free_listint(head->next);
	free(head);
}
