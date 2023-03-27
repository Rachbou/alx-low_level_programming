#include "main.h"

/**
 * puts_half - Entry point
 * prints the second half of a string,
 * @str: the string to print.
 * Return: void.
 */

void puts_half(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		;
	}
	i = i / 2;
	for (i = ; str[i] != '\0'; i--)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
