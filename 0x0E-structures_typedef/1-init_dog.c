#include "dog.h"
/**
 * init_dog - dog parameter
 * @d: pointer to the parameter
 * @name: of the dog
 * @age: of the dog
 * @owner: of the dog
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	(*d).name = name;
	d->age = age;
	d->owner = owner;
}
