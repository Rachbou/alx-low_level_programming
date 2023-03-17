#include <stdio.h>

/**
 * main - Entry point
 * prints the alphabet in lowercase, followed by a new line.
 * Return: Always 0 (Success)
 */

int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	putchar('\n');

	return (0);
}
