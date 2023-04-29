#include "lists.h"

/**
 * priority - function that prints before main executes
 * Return: void
 */

void __attribute__((constructor)) priority()
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
