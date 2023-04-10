#include <ctype.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point
 * Adds positive numbers
 * @argc: argument counter
 * @argv: argument vector
 * Return: 1 if ERROR such as symbols that are not numbers,
 * 0 if nothing is passed
 */

int main(int argc, char *argv[])
{
	int a, b;
	int i = 0;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	for (a = 1; a < argc; a++)
	{
		for (b = 0; argv[a][b] != '\0'; b++)
		{
			if (argv[a][b] < '0' || argv[a][b] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		i += atoi(argv[a]);
	}
	printf("%d\n", i);
	return (0);
}
