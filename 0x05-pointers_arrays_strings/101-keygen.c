#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	srand(time(NULL));

	char password[65];
	int i;

	for (i = 0; i < 64; i++) 
	{
		char random_char = rand() % 94 + 33;
		password[i] = random_char;
	}

	password[64] = '\0';

	printf("Generated Password: %s\n", password);

	return (0);
}
