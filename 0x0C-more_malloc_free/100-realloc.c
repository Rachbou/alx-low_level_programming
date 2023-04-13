#include "main.h"
#include <stdlib.h>

/**
 * _realloc - Entry point
 * Reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previously allocated with a call to
 * malloc: malloc(old_size)
 * @old_size: the size, in bytes, of the allocated space for @ptr
 * @new_size: the new size, in bytes of the new memory block
 * Return: @ptr if @new_size == @old_size, NULL if new_size == 0 &&
 * @ptr != NULL
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *arr;
	char *oldarr = ptr;
	unsigned int n;

	if (old_size == new_size)
	{
		return (ptr);
	}
	if (ptr == NULL)
	{
		arr = malloc(new_size);
		return (arr);
	}
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	arr = malloc(new_size);
	if (arr == NULL)
	{
		return (NULL);
	}
	for (n = 0; n < old_size; n++)
	{
		arr[n] = oldarr[n];
	}
	free(oldarr);
	return (arr);
}
