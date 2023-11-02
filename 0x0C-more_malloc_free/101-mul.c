#include "main.h"
#include <stdlib.h>

/**
 * is_positive_integer - check they are postive int
 * @num: num to be checked
 * Return: value
 */
int is_positive_integer(char *num)
{
	int i = 0;

	while (num[i] != '\0')
	{
		if (num[i] < '0' || num[i] > '9')
			return (0);
		i++;
	}
	return (1);
}
/**
 * multiply - multiple of two nums
 * @num1: first num
 * @num2: second num
 * Return: multiple
 */
int multiply(char *num1, char *num2)
{
	if (num1 == NULL || num2 == NULL)
		return (-1);

	if (!is_positive_integer(num1) || !is_positive_integer(num2))
		return (-1);

	return (atoi(num1) * atoi(num2));
}
/**
 * main - entry fun
 * @argc: argc
 * @argv: argv
 * Return: always 0
 */
int main(int argc, char **argv)
{
	int result;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	result = multiply(argv[1], argv[2]);
	if (result == -1)
	{
		printf("Error\n");
		return (98);
	}

	printf("%d\n", result);
	return (0);
}
