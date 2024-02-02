#include "main.h"
/**
 * _strcmp - concatenate two string
 * @s1: destn
 * @s2: source
 * Return: int indicating comparison
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0 ; s1[i] != '\0' || s2[i] != '\0' ; i++)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
	}
	return (0);
}
