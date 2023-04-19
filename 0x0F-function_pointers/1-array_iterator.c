#include "function_pointers.h"
/**
 * array_iterator - had function ila 3aytuu 3liiha khass ykuun 3ndha f arg
 * array type int and size type int and function bach action
 * tapwantii 3la adresse ta3h
 * @array: array w sf
 * @size: la taill d array
 * @action: hadi ghady diir wa7ad l
 * pass d les info lii kaynin f array l finction
 * akhriin li ba3da action pointer kathazz adress ta3hum
 *
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array != NULL && action != NULL)
	{
		size_t i = 0;

		for (; i < size; i++)
		{
			action(array[i]);
		}
	}
}
