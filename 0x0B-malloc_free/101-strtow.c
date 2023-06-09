#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * Nwords - Entry point
 * Calculate number of words
 * @str: string being passed to check for words
 * Return: number of words
 */
int Nwords(char *str)
{
	int i, n = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (*str == ' ')
			str++;
		else
		{
			for (; str[i] != ' ' && str[i] != '\0'; i++)
				str++;
			n++;
		}
	}
	return (n);
}

/**
 * free_everything - frees the memory
 * @s: pointer values being passed for freeing
 * @i: counter
 * Return: Void
 */
void free_everything(char **s, int i)
{
	for (; i > 0;)
		free(s[--i]);
	free(s);
}

/**
 * strtow - Entry point
 * Splits a string into words.
 * @str: the string
 * Return: a pointer to an array of strings (words),
 * NULL if it fails or if str == NULL or str == ""
 */

char **strtow(char *str)
{
	int total_words = 0, a = 0, b = 0, l = 0;
	char **words, *found_word;

	total_words = Nwords(str);
	words = malloc((total_words + 1) * sizeof(char *));
	if (str == 0 || *str == 0 || total_words == 0 || words == NULL)
		return (NULL);
	for (; *str != '\0' &&  a < total_words;)
	{
		if (*str != ' ')
		{
			found_word = str;
			for (; *str != ' ' && *str != '\0';)
			{
				l++;
				str++;
			}
			words[a] = malloc((l + 1) * sizeof(char));
			if (words[a] == 0)
			{
				free_everything(words, a);
				return (NULL);
			}
			while (*found_word != ' ' && *found_word != '\0')
			{
				words[a][b] = *found_word;
				found_word++;
				b++;
			}
			words[a][b] = '\0';
			a++;
			b = 0;
			l = 0;
		}
		str++;
	}
	return (words);
}
