#include "main.h"

/**
 * print_triangle - Entry point
 * prints a triangle using the character #.
 * @size: the size of the triangle.
 * Return: Void
 */

void print_triangle(int size)
{
	int i, j;

	for (i = size - 1; i >= 0; i--)
	{
		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}
		for (j = i; j < size; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	if (size <= 0)
	{
		_putchar('\n');
	}
}
