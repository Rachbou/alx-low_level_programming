#include "main.h"

/**
 * _strlen - Entry point
 * returns the length of a string.
 * @s: the string.
 * Return: length of a string.
 */
 
int _strlen(char *s)
{
	int l = 0;
	int i;

	for(i=0; *s[i] != '\0'; i++)
	{
		l++;
	}

	return (l);
}
