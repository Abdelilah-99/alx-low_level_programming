#include "main.h"
/**
 * free_dog - just to empty the box
 * @d: the box
*/
void free_dog(dog_t *d)
{
	if(d)
	{
		free(dog->name);
		free(dog->owner);
		free(d);
	}
}