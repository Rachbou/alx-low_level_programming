#include "main.h"
#include <stdio.h>

/**
 * print_number - Entry point
 * prints an integer.
 * @n: the size of the triangle.
 * Return: Void
 */

void print_number(int n)
{
	int m;
	int p;
	int c;
	int num;

	if (n < 0)
	{
		num = -1 * n;
		_putchar('-');
	}
	else
	{
		num = n;
	}
	m = 1;
	p = 1;
	c = 1;
	while (c)
	{
		if (num / (m * p * 10) > 0)
		{
			if (m < 1000000000)
			{
				m *= 10;
			}
			else
			{
				p *= 10;
			}
		}
		else
			c = 0;
	}
	c = 1;
	while (c)
	{
		if (p == 1)
		{
			if (m == 1)
			{
				_putchar(num % 10 + '0');
				c = 0;
			}
			else
			{
				_putchar(((num / m) % 10) + '0');
				m /= 10;
			}
		}
		else
		{
			_putchar(((num / (m * p)) % 10) + '0');
				p /= 10;
		}
	}
}
