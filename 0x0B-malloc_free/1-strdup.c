#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Entry point
 * Returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: The string to copy
 * Return: a pointer to the duplicated string
 * NULL if insufficient memory or if @str is NULL
 */

char *_strdup(char *str)
{
	char *arr;
	int i = 0;
	int j = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[i])
	{
		i++;
	}
	arr = malloc(sizeof(char) * (i + 1));
	if (arr == NULL)
	{
		return (NULL);
	}
	while (str[j])
	{
		arr[j] = str[j];
		j++;
	}
	arr[j + 1] = 0;
	return (arr);
}
