#include <stdio.h>

/**
  * main - Entry point
  * prints the sum of the even-valued terms in the Fibonacci sequence.
  * Return: 0 (Success)
  */

int main(void)
{
	long j, s = 0, m = 1, n = 2;

	s += m;
	while (n < 4000000)
	{
		if (n % 2 != 0)
		{
			s += n;
		}
		j = m;
		m = n;
		n = m + j;
	}
	printf("%ld\n", s);
	return (0);
}
