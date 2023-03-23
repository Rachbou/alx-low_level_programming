#include "main.h"

/**
 * print_number - Entry point
 * prints an integer.
 * @n: the integer to print.
 * Return: Void
 */

void print_number(int n)
{
	int m = 1, p = 1, c = 1, num;

	num = n;
	if (num < 0)
	{
		num *= -1;
		_putchar('-');
	}
	while (c)
	{
		if ((((num / m) / p) / 10) > 0)
		{
			if (m <= 100000000)
				m *= 10;
			else
				p *= 10;
		}
		else
		{
			c = 0;
		}
	}
	while (num >= 0)
	{
		if (m == 1)
		{
			_putchar(num % 10 + '0');
			num = -1;
		}
		else
		{
			_putchar((((num / m) / p) % 10) + '0');
			if (p == 1)
				m /= 10;
			else
				p /= 10;
		}
	}
}
