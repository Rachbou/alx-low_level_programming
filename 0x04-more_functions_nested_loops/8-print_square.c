#include "main.h"

/**
 * print_square - Entry point
 * prints a square using the character #.
 * @size: the size of the square.
 * Return: Void
 */

void print_square(int size)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
