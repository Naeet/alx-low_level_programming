#include "main.h"

/**
 * _memset - fills memory with constant byte
 * @s: memory to be filled starting from s
 * @b: char var
 * @n: byte of memory area
 *
 * Return: char
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
