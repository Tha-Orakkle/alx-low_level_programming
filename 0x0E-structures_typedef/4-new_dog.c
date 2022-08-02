#include "dog.h"

/**
 * new_dog - prints a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: pointer to new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *n_dog;
	int i, j, k;

	if  (name == NULL || owner == NULL)
		return (NULL);

	n_dog = malloc(sizeof(dog_t));
	if (n_dog == NULL)
		return (NULL);

	for (i = 0; name[i] != '\0'; i++)
		;
	i++;
	n_dog->name = malloc(sizeof(char) * i);
	if (n_dog->name == NULL)
	{
		free(n_dog);
		return (NULL);
	}
	for (j = 0; j < i; j++)
		n_dog->name[i] = name[i];

	n_dog->age = age;

	for (k = 0; owner[k] = '\0'; k++)
		;
	k++;
	n_dog->owner = malloc(sizeof(char) * k);
	if (n_dog->owner == NULL)
	{
		free(n_dog->name);
		free(n_dog);
		return (NULL);
	}
	for (j = 0; j < k; j++)
		n_dog->owner = owner[j];

	return (n_dog);
}
