#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - execute fun
 * @array: the array
 * @size: size of array
 * @action: fun
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
