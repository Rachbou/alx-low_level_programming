#include <stdio.h>

/**
  * main - Entry point
  * prints the first 98 Fibonacci numbers.
  * Return: 0 (Success)
  */

int main(void)
{
	int i;
	long j, m = 1, n = 2;

	printf("%ld", m);
	for (i = 0; i < 98; i++)
	{
		printf(", %ld", n);
		j = m;
		m = n;
		n = m + j;
	}
	printf("\n");
	return (0);
}
