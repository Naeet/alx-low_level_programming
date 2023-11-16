#include "lists.h"
/**
 * free_list - frees a ll
 * @head: beg of l
 */
void free_list(list_t *head)
{
	if (head == NULL)
		return;
	free_list(head->next);
	free(head->str);
	free(head);
}
