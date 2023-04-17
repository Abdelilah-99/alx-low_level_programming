#include "dog.h"
/**
 * print_dog - dog parameter
 * @d: pointer to the parameter
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
			printf("(nil)\n");
		else
			printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		if (d->owner == NULL)
			printf("(nil)\n");
		else
			printf("Owmer: %s\n", d->owner);
	}
}
