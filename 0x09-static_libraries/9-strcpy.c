#include "main.h"

/**
 * _strcpy - Entry point.
 * copies the string pointed to.
 * @dest: Destination.
 * @src: pointer.
 * Return: the pointer to dest.
 */

char *_strcpy(char *dest, char *src)
{
	char *start = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (start);
}
