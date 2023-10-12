#include "main.h"
/**
 * more_numbers - print 0 to 14 ten times
 *
 * Return: void
 */

void more_numbers(void)
{
	int i = 0, j, num;

	while (i < 10)
	{
		for (j = 0; j < 15; j++)
		{
			num = j;

			if (num > 9)
			{
				_putchar(num / 10 + '0');
				num %= 10;
			}

			_putchar(num + '0');
		}
	putchar('\n');
	i++;
	}
}
