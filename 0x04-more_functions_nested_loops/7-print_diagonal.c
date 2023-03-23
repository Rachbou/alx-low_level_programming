#include "main.h"

/**
 * print_diagonal - Entry point
 * draws a diagonal line on the terminal.
 * @n: number of times the character \ should be printed.
 * Return: Void
 */

void print_diagonal(int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
