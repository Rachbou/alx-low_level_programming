#include <stdio.h>

/**
 * main - Entry point
 * prints numbers from 1 to 100.
 * prints Fizz instead of multiples of three.
 * prints Buzz instead of multiples of five.
 * prints FizzBuzz instead of multiples of three and five.
 * Return: Void
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf"%d", i);
		}
		if (i == 100)
		{
			continue;
		}
		printf(" ");
	}
}
