#include <stdio.h>

/**
  * main - Entry point
  * prints the first 98 Fibonacci numbers.
  * Return: 0 (Success)
  */

int main(void)
{
	int i;
	unsigned long j, m = 1, n = 2;
	unsigned long j1, j2, m1, m2, n1, n2;
	
	printf("%lu", m);
	for (i = 0; i < 90; i++)
	{
		printf(", %lu", n);
		j = m;
		m = n;
		n = m + j;
	}
	m1 = m / 10000000000;
	n1 = n / 10000000000;
	m2 = m % 10000000000;
	n2 = n % 10000000000;
	for (i = 90; i < 98; i++)
	{
		j1 = m1 + n1;
		j2 = m2 + n2;
		if (m2 + n2 > 9999999999)
		{
			j1 += 1;
			j2 %= 10000000000;
		}
		printf(", %lu%lu", j1, j2);
		m1 = n1;
		m2 = n2;
		n1 = j1;
		n2 = j2;
	}
	printf("\n");
	return (0);
}
