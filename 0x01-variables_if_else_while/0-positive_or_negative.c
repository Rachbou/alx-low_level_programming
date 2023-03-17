#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * if the number is greater than 0: n is positive
 * if the number is 0: n is zero
 * if the number is less than 0: n is negative
 */

/**
 * main - Entry point
 * 
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n > 0)
		printf("%d is negative\n", n);
	else
		printf("%d is zero\n", n);
	return (0);
}
