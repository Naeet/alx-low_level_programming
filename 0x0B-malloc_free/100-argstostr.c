#include "main.h"
#include <stdlib.h>
/**
 * argstostr - fun
 * @ac: int value
 * @av: array
 * Return: pointer
 */
char *argstostr(int ac, char **av)
{

	int i, j, len = 0;
	char *str;
	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			len++;
		}
		len++;
	}

	str = malloc(sizeof(char) * (len + ac));

	if (str == NULL)
		return (NULL);

	len = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			str[len++] = av[i][j];
		}
		str[len++] = '\n';
	}
	str[len] = '\0';
	return (str);
}
