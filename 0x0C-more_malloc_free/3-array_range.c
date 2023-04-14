#include "main.h"
/**
 * array_range - here i just need to arrang num from min to max
 * @min: the min num
 * @max: the max num
 * Return: T
*/
int *array_range(int min, int max)
{
	int *T;
	int size, i;

	size = max - min + 1;
	if (min > max)
	return (NULL);
	T = malloc(sizeof(int) * size);
	if (T == NULL)
	return (NULL);
	for (i = 0; i < size; i++)
	{
		T[i] = min + i;
	}
	return (T);
}
