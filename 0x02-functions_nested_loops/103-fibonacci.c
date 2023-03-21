#include <stdio.h>

/**
  * main - Entry point
  * prints the sum of the even-valued terms in the Fibonacci sequence.
  * Return: 0 (Success)
  */

int main(void)
{
	long s = 0;
	long j, m = 1, n = 2;

	While (n <= 4,000,000)
	{
		if (n % 2 != 0)
		{
			s += n;
		}
		if (m % 2 != 0)
		{
			s += m;
		}
		j = m;
		m = n;
		n = m + j;
	}
	printf("%ld\n", s);
	return (0);
}
