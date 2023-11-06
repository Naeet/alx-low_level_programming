#include "main.h"
int check_palindrome(char *s, int len);
/**
 * _strlen - length
 * @s: string
 * Return: length of string
 */
int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen(s + 1));
}
/**
 * is_palindrome - check if it is
 * @s: input string
 * Return: 1 if palindrome 0 therwise
 */
int is_palindrome(char *s)
{
	int len = _strlen(s);

	return (check_palindrome(s, len));
}
/**
 * check_palindrome - check if palindrome
 * @s: input string
 * @len: length of string
 * Return: 1 if palindrome 0 otherwise
 */
int  check_palindrome(char *s, int len)
{
	if (len <= 1)
		return (1);
	if (s[0] == s[len - 1])
		return (check_palindrome(s + 1, len - 2));
	return (0);
}
