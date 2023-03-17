#include <stdio.h>

/**
 * main - Entry point
 * prints all possible combinations of single-digit numbers.
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++) {
		putchar(i);
		if (i == '9')
			continue;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');

	return (0);
}
