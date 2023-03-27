#include "main.h"

/**
 * puts_half - Entry point
 * prints the second half of a string,
 * @str: the string to print.
 * Return: void.
 */

void puts_half(char *str)
{
	int i, j = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		j++;
	}
	i = (j - 1) / 2;
	for (i = i; j; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
