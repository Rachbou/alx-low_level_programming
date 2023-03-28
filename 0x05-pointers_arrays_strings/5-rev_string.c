#include "main.h"

/**
 * rev_string - Entry point
 * reverses a string.
 * @s: the string to reverse.
 * Return: void.
 */

void rev_string(char *s)
{
	int i, l;
	char rev;

	for (i = 0; s[i] != '\0'; i++)
	{
		;
	}
	l = i - 1;
	for (i = 0; l >= 0 && i < l; i++)
	{
		rev = s[i];
		s[i] = s[l];
		s[l] = rev;
		l--
	}
}
