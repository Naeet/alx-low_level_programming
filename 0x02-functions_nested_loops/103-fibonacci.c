#include <stdio.h>
/**
 * main- fibonacci series till 50
 * Return: 0
 */
int main(void)
{
	int first = 1, second = 2, next;
	int limit = 4000000, sum = 2;

	while (next <= limit)
	{
		next = first + second;
		if (next % 2 == 0)
			sum = sum + next;
		first = second;
		second = next;
	}
	printf("%d\n", sum);
	return (0);

}
