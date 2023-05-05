#include "main.h"
/**
 * clear_bit - returning a 1 bit to 0
 * @n: holding the adresse of n
 * @index: lablassa fach andiru clear bits ya3nii fach ayarja3 0
 * Return: 1 or -1
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
		return (-1);
	*n &= ~(1UL << index);
	return (1);
}
