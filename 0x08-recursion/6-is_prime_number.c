#include "main.h"
/**
 * is_prime_recursive - helper to check num is prime or not
 * @n: num to be checked
 * @divisor: divisor being tested
 *
 * Return: 1 if prime 0 otherwise
 */
int is_prime_recursive(int n, int divisor)
{
	if (n <= 1)
		return (0);
	if (divisor == 1)
		return (1);
	if (n % divisor == 0)
	{
		return (0);
	}
	return (is_prime_recursive(n, divisor - 1));
}
/**
 * is_prime_number - Checks if a number is prime
 * @n: num to be checked
 *
 * Return: 1 if prime 0 otherwise
 */
int is_prime_number(int n)
{
	return (is_prime_recursive(n, n - 1));
}
