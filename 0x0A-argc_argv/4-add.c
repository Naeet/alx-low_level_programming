#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - fun that adds postive numbers
 * @argc: arg count
 * @argv: arg vector
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int i;
	unsigned int j, sum = 0;
	char *e;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			e = argv[i];

			for (j = 0; j < strlen(e); j++)
			{
				if (e[j] < 48 || e[j] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(argv[i]);
			e++;
		}
	printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}
