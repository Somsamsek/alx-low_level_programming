#ifndef DOG_H
#define DOG_H

/**
 * dog_t - new type for struct dog;
 */
typedef struct dog dog_t;

/**
 * struct dog - hold dog information
 * @name:  name of dog
 * @age: dog age
 * @owner: dog owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
int len(char *str);
char *strcpy(char *dest, char *src);

#endif /* DOG_H */
