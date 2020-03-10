#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - creates a new DDDOGGGG
 * @name: name of the DDDDOOOGGGG
 * @age: age of FFFOGGGG
 * @owner: owner of FFOOGGGG
 * Return: pointer to the new DOOGGGG LMAO
 */
dog_t *new_dog(char *name, float age, char *owner)
{
unsigned int nel, old, i;
dog_t *dog;

if (name == NULL || owner == NULL)
return (NULL);
dog = malloc(sizeof(dog_t));
if (dog == NULL)
return (NULL);
for (nel = 0; name[nel]; nel++)
;
nel++;
dog->name = malloc(nel *sizeof(char));
if (dog->name == NULL)
{
free(dog);
return (NULL);
}
for (i = 0; i < nel; i++)
dog->name[i] = name[i];
dog->age = age;
for (old = 0; owner[old]; old++)
;
old++;
dog->owner = malloc(old *sizeof(char));
if (dog->owner == NULL)
{
free(dog->name);
free(dog);
return (NULL);
}
for (i = 0; i < old; i++)
dog->owner[i] = owner[i];
return (dog);
}
