#ifndef DOG_H_
#define DOG_H_

#include <stdlib.h>
#include <stdio.h>

/**
 * struct dog - contains data of dog
 * @name: first member
 * @age: second member
 * @owner: third member
 *
 * Description: Longer description
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
