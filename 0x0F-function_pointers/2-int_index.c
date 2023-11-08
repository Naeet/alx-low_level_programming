#include "function_pointers.h"
#include <stdio.h>
/**
 * int_index -  fun that searches for an array
 * @array: array
 * @size: size
 * @cmp: fun
 * Return: int
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) == 1)
			return (i);
	}
	return (-1);
}
