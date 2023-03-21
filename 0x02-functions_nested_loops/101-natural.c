#include <stdio.h>

/**
  * main - Entry point
  * prints the sum of all the multiples of 3 or 5 below 1024.
  * Return: 0 (Success)
  */

int main(void)
{
	int i, s;

	s = 0;
	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			s += i;
		}
	}
	printf("%d\n", s);
	return (0);
}
