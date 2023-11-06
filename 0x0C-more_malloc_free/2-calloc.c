#include "main.h"
/**
 * _calloc - fun that allocates mem for an array
 * @nmemb: number
 * @size: size of mem
 * Return: null
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *output;

	if (nmemb == 0 || size == 0)
		return (NULL);

	output = calloc(nmemb, size);

	if (output == NULL)
		return (NULL);

	return (output);
}
