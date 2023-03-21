#include <stdio.h>

/**
  * main - Entry point
  * prints the first 98 Fibonacci numbers.
  * Return: 0 (Success)
  */

int main(void)
{
	int i;
	long j, m = 0, n = 1;

	printf("%ld", n);
	for (i = 0; i < 98; i++)
	{
		j = m;
		m = n;
		n = m + j;
		printf(", %ld", n);
	}
	printf("\n");
	return (0);
}
