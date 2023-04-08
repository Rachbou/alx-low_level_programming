#include "main.h"

/**
 * _puts - Entry point
 * prints a string to stdout.
 * @str: the string to print.
 * Return: void.
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
