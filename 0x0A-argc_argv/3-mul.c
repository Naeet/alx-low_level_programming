#include <stdio.h>
#include <stdlib.h>
/**
 * main - fun that mul two numbers
 * @argc: arg count
 * @argv: arg vector
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int n1, n2;

	if (argc == 3)
	{
		n1 = atoi(argv[1]);
		n2 = atoi(argv[2]);
		printf("%d\n", n1 * n2);
	}
	else
		printf("%s\n", "Error");
	return (0);
}
