#include "main.h"

/**
  * main - Entry point
  * prints the first 98 Fibonacci numbers.
  * Return: 0 (Success)
  */

int main(void)
{
	int i;
	long j, m = 0, n = 1;

	for (i = 0; i < 98; i++)
	{
		_putchar(n + '0');
		if (i == 98)
		{
			continue;
		}
		_putchar(',');
		_putchar(' ');
		j = m;
		m = n;
		n = m + j;
	}
	return (0);
}
