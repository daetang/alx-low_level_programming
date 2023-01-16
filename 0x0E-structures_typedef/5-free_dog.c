#include <stdlib.h>
#include "dog.h"
#include <stdio.h>

/**
 * free_dog - frees memory allocated for a struct dog
 * @d: struccccct dog to free
 */

void free_dog(dog_t *d)
{
	if (d == 0)
		return;
		free(d->name);
		free(d->owner);
		free(d);
}
