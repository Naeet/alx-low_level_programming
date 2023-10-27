#include "main.h"
/**
 * _strstr - function that locates a substring
 * @haystack: first string
 * @needle: string to be checked its occurence
 * Return: a pointer to begginin of located string
 */

char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *tempHaystack = haystack;
		char *tempNeedle = needle;

		while (*tempHaystack == *tempNeedle && *tempNeedle)
		{
			tempHaystack++;
			tempNeedle++;
		}

		if (*tempNeedle == '\0')
		{
			return (haystack);
		}

		haystack++;
	}
	return (NULL);
}
