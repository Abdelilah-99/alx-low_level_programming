#include "dog.h"
/**
 * print_dog - dog parameter
 * @d: pointer to the parameter
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name != NULL)
			printf("Name: %s\n", d->name);
		else
			printf("Name: (nil)\n");
		printf("Age: %.6f\n", d->age);
		if (d->owner != NULL)
			printf("Owmer: %s\n", d->owner);
		else
			printf("Owner: (nil)\n");
	}
}
