#include "main.h"

/**
 * _abs - Entry point
 * computes the absolute value of an integer.
 * @n: The number to be checked.
 * Return: the absolute value of n.
 */

int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	n = 0 - n;
	return (n);
}
