#include "main.h"

/**
 * puts_half - print last half of string
 * @str: parameter
 */
void puts_half(char *str)
{
	int i, count = 0, n;

	for (i = 0 ; str[i] != '\0' ; i++)
		count++;
	n = (count - 1) / 2;

	for (i = n + 1 ; str[i] != '\0' ; i++)
		_putchar(str[i]);
	_putchar('\n');
}
