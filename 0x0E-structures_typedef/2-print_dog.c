#include <stdio.h>
#include "dog.h"

/**
 * print_dog - a function that prints struct dog
 * @d: pointer variable to type struct dog
 * Return: void
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name == NULL)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);

	printf("Age: %f\n", d->age);

	if (d->owner == NULL)
		printf("(nil)\n");
	else
		printf("Owner: %s\n", d->owner);
}
