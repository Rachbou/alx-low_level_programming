#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#define ERR_MSG "Error"
		
/**
 * IsNotDigit - Entry point
 * Checks if a string contains a non-digit char
 * @s: string to be evaluated
 * Return: 1 if a non-digit is found, 0 otherwise
 */
		
int IsNotDigit(char *s)
{
	int d = 0;

	while (s[d])
	{
		if (s[d] < '0' || s[d] > '9')
			return (1);
		d++;
	}
	return (0);
}

/**
 * StrLength - Entry point
 * Returns the length of a string
 * @s: string to evaluate
 * Return: the length of the string
 */
int StrLength(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}

/**
 * main - Entry point
 * Multiplies two positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: always 0 (Success)
 */

int main(int argc, char *argv[])
{
	char *s1, *s2;
	int len1, len2, i, m, d1, d2, *result;

	s1 = argv[1], s2 = argv[2];
	if (argc != 3 || IsNotDigit(s1) || IsNotDigit(s2))
		printf("Error\n");
		exit(98);
	len1 = StrLength(s1);
	len2 = StrLength(s2);
	result = malloc((len1 + len2 + 1) * sizeof(int));
	if (!result)
		return (1);
	for (i = 0; i <= len1 + len2; i++)
		result[i] = 0;
	for (len1 = len1 - 1; len1 >= 0; len1--)
	{
		d1 = s1[len1] - '0';
		m = 0;
		for (len2 = StrLength(s2) - 1; len2 >= 0; len2--)
		{
			d2 = s2[len2] - '0';
			m += result[len1 + len2 + 1] + (d1 * d2);
			result[len1 + len2 + 1] = m % 10;
			m /= 10;
		}
		if (m > 0)
			result[len1 + len2 + 1] += m;
	}
	for (i = 0; i < len - 1; i++)
	{
		if (result[i])
			_putchar(result[i] + '0');
	}
	if (!result[i])
		_putchar('0');
	_putchar('\n');
	free(result);
	return (0);
}
