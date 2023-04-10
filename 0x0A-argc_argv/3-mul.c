#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Multiplies two numbers
 * @argc: argument counter
 * @argv: argument vector
 * Return: 0 if it works, 1 if there is an ERROR
 */

int main(int argc, char *argv[])
{
	int n, m, mul;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	n = atoi(argv[1]);
	m = atoi(argv[2]);
	mul = n * m;

	printf("%i\n", mul);

	return (0);
}
