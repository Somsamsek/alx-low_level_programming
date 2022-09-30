#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - prints all data of doubly linked list
 * @h: pointer to head of list
 *
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t i;

	for (i = 0; h != NULL; i++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}

	return (i);
}
