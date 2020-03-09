#include <stdio.h>
#include "dog.h"
/**
 * init_dog - structure of the thing.
 * @d: pointer to structure.
 * @name: name of the dog.
 * @age: age of the dog
 * @owner: owner of the dog
 * Description: asdasdasdasdsadsad.
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
