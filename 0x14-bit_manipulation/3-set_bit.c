#include "main.h"
/**
 * set_bit - set value of bit to 1
 * @n: int
 * @index: int
 * Return: 1 or -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int m;

	if (index > 63)
	{
		return (-1);
	}

	m = 1 << index;
	*n = (*n | m);

	return (1);
}
