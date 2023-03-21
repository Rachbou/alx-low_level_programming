#include "main.h"

/**
  * print_times_table - Entry point
  * Prints the 9 times table, starting with 0.
  * @n: the number to be checked.
  * Return: ...
  */

void print_times_table(int n)
{
	int i, j, k, l;
	
	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				l = i * (j + 1);
				k = i * j;
				if (k >= 100)
				{
					_putchar(k / 100 + '0');
					_putchar((k / 10) % 10 + '0');
					_putchar(k % 10 + '0');
					if (j == n)
					{
						continue;
					}
					_putchar(',');
					_putchar(' ');
				}					
				else if (k >= 10)
				{
					_putchar(k / 10 + '0');
					_putchar(k % 10 + '0');
					if (j == n)
					{
						continue;
					}
					_putchar(',');
					_putchar(' ');
					if (l < 100)
					{
						_putchar(' ');
					}
				}
				else
				{
					_putchar(k + '0');
					if (j == n)
					{
						continue;
					}
					_putchar(',');
					_putchar(' ');
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
}
