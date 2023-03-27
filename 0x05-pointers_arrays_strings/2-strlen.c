#include "main.h"

/**
 * _strlen - Entry point
 * returns the length of a string.
 * @s: the string.
 * Return: length of a string.
 */

int _strlen(char *s)
{
	int l = 0;

	while (*s != '\0')
	{
		l++;
		s++;
	}

	return (l);
}
