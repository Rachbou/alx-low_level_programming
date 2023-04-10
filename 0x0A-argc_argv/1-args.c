#include <stdio.h>

/**
 * main - Entry point
 * Prints the number of arguments passed into it
 * @argc: argument counter
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;
	(void)argv;

	for (i = 0; i <= argc; i++)
	{
		continue;
	}
	printf("%d\n", i - 2);

	return (0);
}
