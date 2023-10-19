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
	int i, t;

	for (i = 0; i < (n / 2); i++)
	{
		t = a[i];
		a[i] = a[n - i -1];
		a[n - i -1] = h;
	}
}
