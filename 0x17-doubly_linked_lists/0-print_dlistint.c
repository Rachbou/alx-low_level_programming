#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - Prints all the elements of a dlistint_t list.
 * @h: The head of the dlistint_t list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes_number = 0;

	while (h)
	{
		nodes_number++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (nodes_number);
}