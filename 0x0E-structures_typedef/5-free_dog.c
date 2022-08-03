/**
 * free_dog - a function that frees dogs.
 * Description:
 * @d: dog to be freed
 * Return: void
 */

#include <stdio.h>
#include "dog.h"

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->name);
	free(d->owner);
	free(d);
}
