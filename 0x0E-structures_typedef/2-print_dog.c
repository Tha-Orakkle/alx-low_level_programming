#include "main.h"

/**
 * print_dog - prints struct dog
 * @d: pointer to the struct dog variable
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}

	if (d->name == NULL)
		d->name = "(Nil)";

	if (d->age <= NULL)
		d->age = "(Nil)";

	if (d->owner == NULL)
		d->owner = "(Nil)";

	printf("Name: %s \n Age: %d \n Owner: %s\n, d->name, d->age, d->owner);
}

