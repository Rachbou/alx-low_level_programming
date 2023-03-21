#include "main.h"

/**
  * times_table - Entry point
  * Prints the 9 times table, starting with 0.
  * Return: ...
  */

void times_table(void)
{
	int i, j, k;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j < 9; j++)
		{
			k = i*j;
			_putchar(k + '0');
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
		}
		k = i*j;
		_putchar(k + '0');
		_putchar('\n');
	}
}
