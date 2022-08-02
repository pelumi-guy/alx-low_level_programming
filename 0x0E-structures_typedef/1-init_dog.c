/**
 * init_dog - a function that initialize
 * a variable of type struct dog
 * Description: Struct for dog
 * @d: pointer to struct dog variable
 * @name: first member
 * @age: second member
 * @owner: third member
 * Return:
 */

#include <stdio.h>
#include "dog.h"

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
