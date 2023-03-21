#include "main.h"
#include <stdio.h>

/**
  * print_to_98 - Entry point
  * prints all natural numbers from n to 98.
  * @n: The first number.
  * Return: ...
  */

void print_to_98(int n)
{
	int i;

	for (i = n; i < 98; i++)
	{
		printf("%d, ", i);
	}
	for (i = n; i > 98; i--)
	{
		printf("%d, ", i);
	}
	printf("%d\n", 98);
}
