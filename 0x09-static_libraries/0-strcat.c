#include "main.h"
/**
 * _strcat - concatenate two string
 * @dest: destn
 * @src: source
 * Return: pointer resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int destlen = 0, srclen = 0, i;

	for (i = 0 ; dest[i] != '\0' ; i++)
		destlen++;

	for (i = 0 ; src[i] != '\0' ; i++)
		srclen++;

	for (i = 0; i <= srclen ; i++)
		dest[destlen + i] = src[i];

	return (dest);
}
