#include "main.h"
/**
 * string_nconcat - str concat of n
 * @s1: first integer
 * @s2: sec string
 * @n: strings to be conca
 * Return: concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int s1len = 0, s2len = 0, i;
	char *output;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		s1len++;
	for (i = 0; s2[i] != '\0'; i++)
		s2len++;

	output = malloc(sizeof(char) * s1len + n + 1);
	if (output == NULL)
		return (NULL);

	if (n >= s2len)
		n = s2len;
	else
		n = n;

	for (i = 0; s1[i] != '\0'; i++)
		output[i] = s1[i];
	for (i = 0; i < n; i++)
		output[s1len + i] = s2[i];
	output[s1len + i] = '\0';

	return (output);
}
