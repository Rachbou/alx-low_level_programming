#include <stdio.h>

/**
 * main - Entry point
 * prints all the numbers of base 16 in lowercase.
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	int ch;

	for (i = '0'; i <= '9'; i++)
		putchar(i);
	for (ch = 'a'; ch <= 'f'; ch++)
		putchar(ch);
	putchar('\n');

	return (0);
}
