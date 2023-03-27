#include "main.h"

/**
 * print_rev - Entry point
 * prints a string in reverse.
 * @s: the string to print.
 * Return: void.
 */

void print_rev(char *s)
{
	int i, l;

	l = _strlen(s);
	for (i = 1; s[i - 1] != '\0'; i++)
	{
		_putchar(s[l - i]);
	}
	_putchar('\n');
}
