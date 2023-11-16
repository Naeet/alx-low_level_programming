#include "lists.h"
/**
 * add_node - add node
 * @head: head
 * @str: str to be added
 *
 * Return: address of new elt
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode;
	unsigned int i, count = 0;

	newnode = malloc(sizeof(list_t));

	if (newnode == NULL)
		return (NULL);

	newnode->str = strdup(str);
	for (i = 0; str[i] != '\0'; i++)
		count++;
	newnode->len = count;
	newnode->next = *head;
	*head = newnode;

	return (*head);
}
