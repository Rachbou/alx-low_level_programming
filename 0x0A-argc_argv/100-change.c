#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Prints the min number of coins to make change
 * for an amount of money
 * @argc: argument count
 * @argv: arguments
 * Return: 0
 */
int main(int argc, char **argv)
{
	int total, c;
	unsigned int j;
	char *p;
	int cents[] = {25, 10, 5, 2};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	total = strtol(argv[1], &p, 10);
	c = 0;

	if (!*p)
	{
		while (total > 1)
		{
			for (j = 0; j < sizeof(cents[j]); j++)
			{
				if (total >= cents[j])
				{
					c += total / cents[j];
					total = total % cents[j];
				}
			}
		}
		if (total == 1)
			c++;
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", c);
	return (0);
}
