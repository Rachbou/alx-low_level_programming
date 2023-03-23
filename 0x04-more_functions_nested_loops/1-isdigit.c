#include "main.h"

/**
 * _isdigit - Entry point
 * checks for a digit (0 through 9).
 * @c: The character to be checked.
 * Return: 1 if c is a digit, 0 otherwise
 */

int _isdigit(int c)
{
	if (c > 47 && c < 58)
	{
		return (1);
	}

	return (0);
}
