#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Entry point
 * Allocates memory for an array
 * @nmemb: the number of elements
 * @size: the size of that element type
 * Return: A pointer to the allocated memeory.
 * NULL if nmemb or size is 0.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arr;
	unsigned int p;

	if (size == 0 || nmemb == 0)
	{
		return (NULL);
	}
	arr = malloc(size * nmemb);
	if (arr == NULL)
	{
		return (NULL);
	}
	for (p = 0; p < (size * nmemb); p++)
	{
		arr[p] = 0;
	}
	return (arr);
}
