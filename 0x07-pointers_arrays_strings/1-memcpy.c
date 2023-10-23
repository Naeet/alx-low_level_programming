#include "main.h"

/**
 * _memcpy - copy  memory with constant byte
 * @dest: destination
 * @src: source
 * @n: byte of memory area
 *
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
		n--;
	}
	return (dest);
}
