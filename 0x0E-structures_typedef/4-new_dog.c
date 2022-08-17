#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - a function that creates a new dog
 * @name: first element
 * @age: second element
 * @owner: third element
 * Return: new_dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	if (new_dog == NULL)
		return (NULL);

	new_dog->name = name;
	new_dog->age = age;
	new_dog->owner = owner;

	return (new_dog);
}
