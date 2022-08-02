#include "dog.h"

/**
 * init_dog - initialize a variable of type struct
 * @d: pointer to the struct type variable dog
 * @name: name to initialize
 * @age: age to initialize
 * @owner: owner to initialize
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		p->name = name;
		p->age = age;
		p->owner = owner;
	}
}

