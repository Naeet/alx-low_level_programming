#include "main.h"

/**
 * print_alphabet_x10 - print alphabets in order 10 times
 */

void print_alphabet_x10(void)
{
	char l = 'a';
	int i;

	for (i = 0 ; i < 10 ; i++)
	{
		while (l <= 'z')
		{
			_putchar(l);
			l++;
		}

		_putchar('\n');
		l = 'a';
	}
}
