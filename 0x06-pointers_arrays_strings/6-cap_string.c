#include "main.h"
#include <stdbool.h>

/**
 * cap_string - caps all words of a string
 * @str: string
 *
 * Return: str
 */

char *cap_string(char *str)
{
	bool capitalize = true;
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (capitalize)
			{
				str[i] -= 32;
				capitalize = false;
			}
		}
		else
		{
			if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'
					|| str[i] == ',' || str[i] == ';' ||
					str[i] == '.' || str[i] == '!' || str[i] == '?' || str[i] == '"' ||
					str[i] == '(' || str[i] == ')' || str[i] == '{' || str[i] == '}')
				capitalize = true;
		}
	}
	return (str);
}
