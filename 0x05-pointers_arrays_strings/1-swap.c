#include "main.h"

/**
 * swap_int -swapfunction
 * @a: parameter to be swapped
 * @b: parameter to be swapped
 *
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
