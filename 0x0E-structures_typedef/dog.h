#ifndef DOG_H
#define DOG_H

#include <stdio.h>
/**
 * struct dog - this will contain the type of data
 * @name: of the dog
 * @age: of the dog
 * @owner: of the dog
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
