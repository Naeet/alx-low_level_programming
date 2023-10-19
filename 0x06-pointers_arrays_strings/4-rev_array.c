#include "main.h"
/**
 * reverse_array - reverse content of array
 * @a: array of int
 * @n: number of elts to swap
 *
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
	int i;

	i = n - 1;
	while (i >= 0)
	{
		printf("%d", a[i]);
		if (i != 0)
		{
			printf(", ");
		}
		i--;
	}
	printf("\n");
}
