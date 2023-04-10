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
	printf("%d\n", argc - 2);
	return (0);
}
