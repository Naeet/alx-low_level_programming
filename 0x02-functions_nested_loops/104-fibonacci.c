#include <stdio.h>
/**
 * main- fibonacci series till 50
 * Return: 0
 */
int main(void)
{
	unsigned long int first = 1, second = 2, next, i;

	printf("%lu, ", first);

	for (i = 1 ; i < 98; i++)
	{
		printf("%lu", second);
		next = first + second;
		first = second;
		second = next;
		if (i != 97)
			printf(", ");
	}
	printf("\n");
	return (0);
}
