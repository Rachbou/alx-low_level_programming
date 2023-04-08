#include "main.h"

/**
 * _memset - Entry point.
 * Fills memory with a constant byte.
 * @s: Pointer to memory area.
 * @b: Constant byte to use.
 * @n: Number of bytes to fill.
 * Return: pointer to the memory area
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
