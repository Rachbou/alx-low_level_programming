#include "main.h"

/**
 * _isalpha - Entry point
 * checks for alphabetic character.
 * @c: The character to be checked
 * Return: 1 if c is a letter, 0 otherwise
 */

int _isalpha(int c)
{
	if (c > 96 && c < 123)
	{
		return (1);
	}

	if (c > 64 && c < 91)
	{
		return (1);
	}

	return (0);
}
