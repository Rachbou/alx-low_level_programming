#include "main.h"

/**
 * primeFinder - Entry point
 * searches for if a number is prime
 * @m: the number to check
 * @n: the numbers we'll go through
 * Return: Whether or not the number is a prime number
 */

int primeFinder(int m, int n)
{
	if (m <= 1 || m % n == 0)
		return (0);
	else if (m == n)
		return (1);
	else if (m > n)
		primeFinder(m, n + 1);
	return (1);
}

/**
 * is_prime_number - Entry point
 * tells us if an integer is a prime number or not
 * @n: the number to check
 * Return: 0 if the number is not prime, and 1 if it is
 */

int is_prime_number(int n)
{
	return (primeFinder(n, 2));
}
