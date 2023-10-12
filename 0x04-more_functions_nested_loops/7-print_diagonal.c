#include "main.h"
/**
 * print_diagonal - print diagonal line
 *
 * Return: void
 */


void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
		_putchar('\n');
	else
	{
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (i == j)
				_putchar('\\');
			else
				_putchar(' ');
		}
		_putchar('\n');
	}
	}
}
