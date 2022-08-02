#ifndef DOG_H_
#define DOG_H_

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

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
