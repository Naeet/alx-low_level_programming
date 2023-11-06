#include "main.h"
/**
 * calculate_sqrt - calculate square root
 * @guess: number
 * @n: the number
 * Return: sqrt
 */

int calculate_sqrt(int n, int guess)
{
	if (guess * guess == n)
		return (guess);
	else if (guess * guess > n)
		return (-1);
	else
		return (calculate_sqrt(n, guess + 1));
}
/**
 * _sqrt_recursion - natural square root of a number
 * @n: the number
 * Return: sqrt
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (calculate_sqrt(n, 0));
}
