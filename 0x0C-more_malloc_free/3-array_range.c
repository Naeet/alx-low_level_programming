#include "main.h"
/**
 * array_range - fun creating array of integers
 * @min: min value
 * @max: max value
 * Return: pointer to new array
 */
int *array_range(int min, int max)
{
	int *output;
	int size, i;

	if (min > max)
		return (NULL);

	size = max - min + 1;
	output = malloc(sizeof(int) * size);

	if (output == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		output[i] = min++;

	return (output);
}
