#include "main.h"
/**
 * flip_bits - to know how mani bit that changed
 * @n: first num
 * @m: second num
 * Return: result
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int result = n ^ m;
	int i = 0;

	while (result)
	{
		i += result & 1;
		result >>= 1;
	}
	return (i);
}
