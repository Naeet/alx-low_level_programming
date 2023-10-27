#include <stdio.h>
/**
 * main - fun that prints number of args
 * @argc: argument count
 * @argv: argument vector
 * Return: always 0 (success)
 */
int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
