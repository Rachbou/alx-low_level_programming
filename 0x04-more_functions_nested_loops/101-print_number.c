#include "main.h"

/**
 * print_number - Entry point
 * prints an integer.
 * @size: the size of the triangle.
 * Return: Void
 */

void print_number(int n)
{
	int i, j;
	
	i = n;
	j = 1;
	while (i != 0)
	{
		i = i / 10;
		j = j * 10;
	}
	
	i = n;
	if (n < 0)
	{
		i = 0 - n;
		_putchar('-');
	}
	while (j != 0)
	{
		_putchar(i / j + '0');
		i = i % j;
		j = j / 10;
	}
	_putchar('\n');
}
