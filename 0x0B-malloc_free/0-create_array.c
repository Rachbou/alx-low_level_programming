#include "main.h"
#include <stdlib.h>

/**
 * create_array - Entry point
 * Creates an array of chars and initializes it with a specific char
 * @size: size of the array
 * @c: the character to initialize the array with
 * Return: a pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	unsigned int j = 0;
	char *s;

	s = malloc(sizeof(char) * size);
	if (size == 0 || s == NULL)
	{
		return (NULL);
	}
	while (j < size)
	{
		s[j] = c;
		j++;
	}
	return (s);
}
