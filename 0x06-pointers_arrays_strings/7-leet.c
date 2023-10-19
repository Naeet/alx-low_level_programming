#include "main.h"
/**
 * leet -  fun that encodes a str to 1337
 * @s: char
 *
 * Return: s
 */

char *leet(char *s)
{
	int i, j;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (i = 0 ; s[i] != 0 ; s++)
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == s1[j])
			{
				s[i] = s2[j];
			}
		}
	}

	return (s);
}
