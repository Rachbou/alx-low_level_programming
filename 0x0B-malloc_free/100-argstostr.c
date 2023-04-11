#include "main.h"
#include <stdlib.h>

/**
 * arrgstostr - Entry point
 * Concatenates all the arrguments of your program
 * @ac: counter of arrguments
 * @av: vector of arrguments
 * Return: pointer to a new string, or NULL if it fails. Returns NULL
 * if ac == 0 or av == NULL
 */

char *argstostr(int ac, char **av)
{
	char *arr;
	int i;
	int j;
	int k = 0;
	int n;
	int m;
	int c = 0;

	if (ac == 0)
		return (NULL);
	if (av == NULL)
		return (NULL);
	for (i = 0; i <= ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			c++;
		c++;
	}
	arr = malloc(sizeof(char) * c);
	if (arr == NULL)
		return (NULL);
	for (n = 0; n < ac; n++)
	{
		for (m = 0; av[n][m] != '\0'; m++)
		{
			arr[k] = av[n][m];
			k++;
		}
		arr[k] = '\n';
		k++;
	}
	arr[k] = '\0';
	return (arr);
}
