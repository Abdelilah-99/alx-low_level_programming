#include "dog.h"
/**
 * new_dog - zadna kalb akhur
 * @name: smytu
 * @age: bayan
 * @owner: ana
 * Return: NULL or dog if everything success
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	int n = 0, j = 0, o = 0, i = 0;
	dog_t *dog;
	if (name == NULL || owner == NULL)
		return (NULL);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	while (name[n])
	{
		n++;
	}
	dog->name = malloc(n * sizeof(char));
	if (dog->name == NULL)
	{
		free (dog);
		return (NULL);
	}
	while (i < n)
	{
		dog->name[i] = name[i];
		i++;
	}
	dog->age = age;
	while (owner[o])
	{
		o++;
	}
	dog->owner = malloc(o * sizeof(char));
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	while (j < o)
	{
		dog->owner[j] = owner[j];
		j++;
	}
	return (dog);
}
