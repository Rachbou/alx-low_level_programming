#include "main.h"

/**
  * add - Entry point
  * adds two integers and returns the result.
  * @n: The first number.
  * Return: ...
  */

void print_to_98(int n)
{
	int i;

	for (i = n, i < 98, i++)
	{
		printf('%d, ', i);
	}
	for (i = n, i > 98, i--)
	{
		printf('%d, ', i);
	}
	printf('%d\n', i);
}
