#include "main.h"
#include <stdio.h>

/**
 * rev_string - Entry point
 * reverses a string.
 * @s: the string to reverse.
 * Return: void.
 */

void rev_string(char *s)
{
	int i, l;
	char *rev = s;

	l = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		l++;
	}
	for (i = 0; i < l; i++)
	{
		rev[i] = s[l - i - 1];
	}
	*s = rev;
}
