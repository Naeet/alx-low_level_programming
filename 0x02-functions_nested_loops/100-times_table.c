#include "main.h"
/**
 * print_times_table - Prints the n times table, starting with 0
 * @n: The number for the times table
 */

void print_times_table(int n)
{
	if (n >= 0 && n <= 14)
	{
		int i, j, product;

		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				product = i * j;
				if (product > 99)
				{
					_putchar(',');
					_putchar(32);
					_putchar((product / 100) + '0');
					_putchar(((product / 10) % 10) + '0');
					_putchar((product % 10) + '0');
			}
				else if (product > 9)
				{
					_putchar(',');
					_putchar(32);
					_putchar(32);
					_putchar(((product / 10) % 10) + '0');
					_putchar((product % 10) + '0');
				}
				else
				{
					if (j != 0)
					{
						_putchar(',');
						_putchar(32);
						_putchar(32);
						_putchar(32);
					}
					_putchar(product + '0');
				}
			}
			_putchar('\n');
		}
	}
}
