#include "main.h"

/**
 * _isupper - a fun to check if char is uppercase letter
 * @c: prototype tb be checked
 *
 * Return: 1 0r 0
 */

int _isupper(int c)
{
	

	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
