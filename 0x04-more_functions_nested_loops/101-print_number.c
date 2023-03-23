#include "main.h"

/**
 * print_number - Entry point
 * prints an integer.
 * @n: the size of the triangle.
 * Return: Void
 */

void print_number(int n)
{
	long m;
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
	c = 1;
	while (c)
	{
		if (num / (m * 10) > 0)
			m *= 10;
		else
			c = 0;
	}
	c = 1;
	while (c)
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
}
