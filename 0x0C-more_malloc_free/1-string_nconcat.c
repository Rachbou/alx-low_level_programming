#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Entry point
 * Concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: the number of bytes to include of @s2
 * Return: newly allocated space in memory;
 * NULL if the function fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *arr;
	unsigned int l1 = 0, l2 = 0, m = 0;
	unsigned int p, q;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[l1])
	{
		l1++;
	}
	while (s2[l2] && l2 < n)
	{
		l2++;
	}
	arr = malloc(sizeof(char) * (l1 + l2 + 1));
	if (arr == NULL)
	{
		return (NULL);
	}
	for (p = 0; p < l1; p++)
	{
		arr[m++] = s1[p];
	}
	for (q = 0; q < l2; q++)
	{
		arr[m++] = s2[q];
	}
	arr[m] = '\0';
	return (arr);
}
