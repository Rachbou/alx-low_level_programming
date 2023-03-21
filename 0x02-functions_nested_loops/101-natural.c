#include "main.h"

/**
  * print_times_table - Entry point
  * Prints the 9 times table, starting with 0.
  * @n: the number to be checked.
  * Return: ...
  */

void naturals_to_1024(void)
{
	int i, s;
	
	s = 0;
	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			s += i
		}
	}
	
	printf("the sum of all the multiples of 3 or 5 below 1024 (excluded) is: %d.\n", s)
}
