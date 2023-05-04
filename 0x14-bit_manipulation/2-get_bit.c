#include "main.h"
/**
 * get_bit - get bit at index
 * @n: num in dec
 * @index: num that will show me where is the victim
 * Return: 0 or 1 cause if rs = 1 then return is 1 cause of &
*/
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int rs;

	if (index > 64)
		return (-1);
	rs = n >> index;
	return (rs & 1);
}
