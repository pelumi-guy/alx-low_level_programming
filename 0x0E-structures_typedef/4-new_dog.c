#include <stdio.h>
#include "dog.h"
/**
 * new_dog - a function that creates a new dog.
 * Description:
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: new dog struct
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	/* int nameLen, ownerLen, i; */
	dog_t goodboy, *newDog;

	newDog = &goodboy;

	newDog->name = malloc(sizeof(name));
	if (newDog->name == NULL)
	{
		free(newDog);
		return (NULL);
	}
	newDog->name = name;

	newDog->age = age;

	newDog->owner = malloc(sizeof(owner));
	if (newDog->owner == NULL)
	{
		free(newDog->name);
		free(newDog->owner);
		free(newDog);
		return (NULL);
	}
	newDog->owner = owner;

	return (newDog);
}
