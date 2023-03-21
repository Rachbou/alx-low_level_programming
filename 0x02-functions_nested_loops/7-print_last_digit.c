#include "main.h"

/**
 * print_last_digit - Entry point
 * prints the last digit of a number.
 * @n: The number to be checked.
 * Return: the value of the last digit
 */

int print_last_digit(int n)
{
	int l;
	l = n % 10;
	if (l < 0)
	{
		l = 0 - l;
	}
	_putchar(l + '0');
	return (l);
}
