#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - frees the DOGSSS
 * @d: pointer to dog
 * Return: voids
 */
void free_dog(dog_t *d)
{
	if (d)
{
		free(d->name);
		free(d->owner);
		free(d);
}
}
