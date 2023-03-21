#include <stdio.h>

/**
  * main - Entry point
  * prints the first 50 Fibonacci numbers.
  * Return: 0 (Success)
  */

int main(void)
{
	int i;
	long j, m = 1, n = 2;

	printf("%d, %d", m, n);
	for (i = 2; i < 50; i++)
	{
		printf(", %d", n + m);
		j = m;
		m = n;
		n = m + j;
	}
	printf("\n");
	return (0);
}
