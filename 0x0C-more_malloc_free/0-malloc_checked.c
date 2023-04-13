#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Entry point
 * Allocates memory using malloc
 * @b: the number to allocate memory for
 * Return: pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	unsigned int *a;

	a = malloc(b);
	if (a == NULL)
	{
		exit(98);
	}
	return (a);
}
