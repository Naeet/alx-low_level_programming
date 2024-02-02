#include "main.h"
/**
 * _strncat - concatenate two string
 * @dest: destn
 * @src: source
 * @n: number
 * Return: pointer resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int destlen = 0, i;

	for (i = 0 ; dest[i] != '\0' ; i++)
		destlen++;

	for (i = 0 ; i < n && src[i] != '\0' ; i++)
		dest[destlen + i] = src[i];
	dest[destlen + i] = '\0';

	return (dest);
}
