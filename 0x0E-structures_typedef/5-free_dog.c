#include "main.h"
/**
 * free_dog - just to empty the box
 * @d: the box
*/
void free_dog(dog_t *d)
{
	if(d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}