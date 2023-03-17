#include <stdio.h>

/**
 * main - Entry point
 * prints the lowercase alphabet in reverse, followed by a new line.
 * Return: Always 0 (Success)
 */

int main(void)
{
	int ch;

	for (ch = 'z'; ch >= 'a'; ch--)
		putchar(ch);
	putchar('\n');

	return (0);
}
