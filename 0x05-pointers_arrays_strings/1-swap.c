#include "main.h"
/**
 * swap_int - eee
 * @a: a = &a
 * @b: b = &b
 */
void swap_int(int *a, int *b)
{
	int s;

	s = *a;
	*a = *b;
	*b = s;
}
