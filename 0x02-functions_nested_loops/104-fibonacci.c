#include <stdio.h>
/**
 * main- fibonacci series till 50
 * Return: 0
 */
int main(void)
{
	unsigned long int prev = 1;
	unsigned long int curr = 2;
	unsigned long int next;
	int count;

	printf("%lu, %lu", prev, curr);

	for (count = 2; count < 98; count++)
	{
		next = prev + curr;
		printf(", %lu", next);
		prev = curr;
		curr = next;
	}

	printf("\n");

	return 0;
}
