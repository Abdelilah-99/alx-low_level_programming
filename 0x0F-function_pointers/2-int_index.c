#include "function_pointers.h"
/**
 * int_index - function gha bach ndiir search c tt
 * @array: same
 * @size: d array
 * @cmp: pointer function 3la 7aassab int_index m3aman kat3amall
 * Return: i or -1
 *
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			for (; i < size; i++)
			{
				if (cmp(array[i]))
					return (i);
			}
		}
	}
	return (-1);
}
