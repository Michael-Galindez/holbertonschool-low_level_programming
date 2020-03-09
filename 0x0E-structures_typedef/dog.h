#ifndef DOG_H_
#define DOG_H_
/**
 * structure dog - structure of dog info
 * @name: name of the dog.
 * @age: age of the dog
 * @owner: owner of the dog
 * description: dog structure of info of the dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
