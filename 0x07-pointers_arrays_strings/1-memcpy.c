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
	int i;
	int r = n;

	for (i = 0; i < r; i++)
	{
		dest[i] = src[i];
		n--;
	}
	return (dest);
}
