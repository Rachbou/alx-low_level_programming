#include "main.h"

/**
 * sqrtFinder - Entry point
 * Finds the square root of two numbers
 * @m: The number
 * @n: The test for square root of @a
 * Return: square root
 */

int sqrtFinder(int m, int n)
{
	if (n * n > m)
		return (-1);
	else if (n * n == m)
		return (n);
	else
		return (sqrtFinder(m, n + 1));
	return (1);
}

/**
 * _sqrt_recursion - Entry point
 * returns the natural square root of a number
 * @n: the number to return the square root of
 * Return: the square root of @n
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (sqrtFinder(n, 1));
}
