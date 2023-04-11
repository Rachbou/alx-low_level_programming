#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Entry point
 * concatenates two string
 * @s1: the first string
 * @s2: the string to add to @s1
 * Return: a pointer that points to a newly allocated space which
 * contains the contents of @s1, followed by the contents of @s2,
 * and null terminated. Should return NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	char *s;
	int len1 = 0;
	int len2 = 0;
	int len;
	int i = 0;
	int j = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[len1])
		len1++;
	while (s2[len2])
		len2++;
	len = len1 + len2;
	s = malloc(sizeof(char) * len + 1);
	if (s == NULL)
		return (NULL);
	while (i < len1)
	{
		s[i] = s1[i];
		i++;
	}
	while (i <= len)
	{
		s[i] = s2[j];
		i++;
		j++;
	}
	return (s);
}
