#include "main.h"

/**
 * main - Entry point
 * Prints the name of the file it was compiled from
 * Return: 0
 */

int main(void)
{
	int i;

	for (i = 0; __BASE_FILE__[i] != '\0'; i++)
	{
		_putchar(__BASE_FILE__[i]);
	}
	_putchar('\n');	
	return (0);
}
