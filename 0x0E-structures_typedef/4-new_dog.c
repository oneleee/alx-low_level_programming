#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: pointer to new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int fl, nl, o;
	dog_t *dog;

	if (name == NULL || owner == NULL)
		return (NULL);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	for (fl = 0; name[fl]; fl++)
		;
	fl++;
	dog->name = malloc(fl * sizeof(char));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	for (o = 0; 0 < fl; o++)
		dog->name[o] = name[o];
	dog->age = age;
	for (nl = 0; owner[nl]; nl++)
		;
	nl++;
	dog->owner = malloc(nl * sizeof(char));
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (o = 0; o < nl; o++)
		dog->owner[o] = owner[o];
	return (dog);
}
