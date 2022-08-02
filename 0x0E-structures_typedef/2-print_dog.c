#include "dog.h"

/**
 * print_dog - prints struct dog
 *
 * @d: pointer to the struct dog variable
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}

	if (d->name == NULL)
		printf("Name: (Nil)\n");
	else
		printf("Name: %s\n", d->name)

	if (d->age <= 0)
		printf("Age: (Nil)\n");
	else
		printf("Age: %f\n");
	if (d->owner == NULL)
		printf("Owner: (Nil)");
	else
		printf("Owner: %s\n");
}

