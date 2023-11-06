#include "main.h"
/**
 * malloc_checked - fun that allocates memory
 * @b: size to be allocated
 * Return: pointer to allocated memory
 */
void *malloc_checked(unsigned int b)
{
	char *output;

	output = malloc(b);

	if (output == NULL)
		exit(98);
	else
		return (output);
}
