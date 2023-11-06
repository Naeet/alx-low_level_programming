#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns to newly allocated space in memory
 * @str: string
 * Return: pointer
 */
char *_strdup(char *str)
{
	char *array;
	unsigned int i;
	int count;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		count++;

	array = malloc(sizeof(char) * count + 1);

	if (array == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		array[i] = str[i];

	return (array);
}
