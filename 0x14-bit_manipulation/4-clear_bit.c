#include "main.h"
/**
 * clear_bit - clear bit
 * @n: num
 * @index: ind
 * Return: 1 orm-1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i;

	if (index > 63)
		return (-1);

	i = 1 << index;

	if (*n & i)
		*n ^= i;

	return (1);
}
