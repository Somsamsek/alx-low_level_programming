#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - a function that frees typedef dog_t of struct dog
 * @d: pointer variable to typedef dog_t
 * Return: void
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	if (d->name)
		free(d->name);

	if (d->owner)
		free(d->owner);

	free(d);

	return;
}
