#include "main.h"

/**
 * puts2 - Entry point
 * prints every other character of a string,
 * starting with the first character.
 * @s: the string to print.
 * Return: void.
 */
 
void puts2(char *s)
{
	int a;

	for (a = 0; s[a] != '\0'; a++)
	{
		if (a % 2 == 0)
		{
			_putchar(s[a]);
		}
	}
	_putchar('\n');
}
