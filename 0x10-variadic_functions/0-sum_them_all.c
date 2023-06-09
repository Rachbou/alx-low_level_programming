#include <stdarg.h>

/**
 * sum_them_all - Entry point
 * sums all the parameters
 * @n: the numbers of arguments being passed through
 * Return: the sum of all parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list valist;
	unsigned int sum = 0, i;

	if (n == 0)
	{
		return (0);
	}
	va_start(valist, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(valist, int);
	}
	va_end(valist);
	return (sum);
}
