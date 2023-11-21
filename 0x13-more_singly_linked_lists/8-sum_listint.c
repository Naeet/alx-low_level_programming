#include "lists.h"
/**
 * sum_listint - returns sum of all data
 * @head: head
 * Return: sum of all link datas
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
