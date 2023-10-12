#include "main.h"
/**
 * print_triangle - a fun to print traingle
 * @size: protocol to print triangle
 *
 * Return: void
 */

void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
		_putchar('\n');
	else
	{
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (j >= i)
				_putchar('#');
			else
				_putchar(' ');
		}
		_putchar('\n');
	}
	}
}
