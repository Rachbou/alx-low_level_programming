#include "main.h"

/**
 * swap_int - Entry point
 * swaps the values of two integers.
 * @a: the first integer.
 * @b: the second integer.
 * Return: Void
 */

void swap_int(int *a, int *b)
{
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}
