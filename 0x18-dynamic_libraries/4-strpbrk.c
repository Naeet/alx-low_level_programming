#include "main.h"
/**
 * _strpbrk - fun that searched string for any set of bytes
 * @s: string
 * @accept: string
 * Return: char
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);
}
