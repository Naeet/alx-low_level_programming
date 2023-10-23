#include "main.h"
/**
 * _strspn - fun gets length of prefix substring
 * @s: char to check
 * @accept: char to compare
 * Return: comared value set of string
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int i, get;

	while (*s)
	{
		get = 0;
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				get = 1;
				break;
			}
		}
		if (get)
		{
			count++;
			s++;
		}
		else
			break;
	}

		return (count);
}
