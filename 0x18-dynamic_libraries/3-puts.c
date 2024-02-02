#include "main.h"

/**
 * _puts - print string to stdout
 * @str: parameter to be printed
 *
 * Return: nothing
 */

void _puts(char *str)
{
	int i;

	for (i = 0 ; str[i] != '\0' ; i++)
		_putchar(str[i]);
	_putchar('\n');
}
