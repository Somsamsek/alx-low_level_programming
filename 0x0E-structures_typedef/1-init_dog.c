#include <stdio.h>
#include "dog.h"

/**
 * init_dog -  initialise a variable of struct dog
 * @d: pointer variable of type struct dog
 * @name: 1st member
 * @age: 2nd member
 * @owner: 3rd member
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
