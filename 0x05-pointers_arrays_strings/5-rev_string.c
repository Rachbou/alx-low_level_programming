#include "main.h"

/**
 * rev_string - Entry point
 * reverses a string.
 * @s: the string to reverse.
 * Return: void.
 */

void rev_string(char *s)
{
	int l, i;

	for (i = 0; s[i] != '\0'; i++)
	{
		l++;
	}

	char str[l];

	for (i = i - 1; s[i] != '\0'; i--)
	{
		str[i] = s[i];
	}
	*s = str;
}
