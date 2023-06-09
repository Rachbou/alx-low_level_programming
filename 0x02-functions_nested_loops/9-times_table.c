#include "main.h"

/**
  * times_table - Entry point
  * Prints the 9 times table, starting with 0.
  * Return: ...
  */

void times_table(void)
{
	int i, j, k, l;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			l = i * (j + 1);
			k = i * j;
			if (k >= 10)
			{
				_putchar(k / 10 + '0');
				_putchar(k % 10 + '0');
				if (j == 9)
				{
					continue;
				}
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar(k + '0');
				if (j == 9)
				{
					continue;
				}
				_putchar(',');
				_putchar(' ');
				if (l < 10)
				{
					_putchar(' ');
				}
			}
		}
		_putchar('\n');
	}
}
