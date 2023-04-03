#include "main.h"
/**
 * set_string - Entry point.
 * Sets the value of a pointer to a char;
 * @s: The pointer to change;
 * @to: The value to change the pointer to;
 * Return: Void.
 */

void set_string(char **s, char *to)
{
	*s = to;
}
