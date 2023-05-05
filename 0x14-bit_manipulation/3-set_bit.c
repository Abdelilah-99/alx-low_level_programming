#include "main.h"
/**
 * set_bit - the num wher indexing will return to 1
 * @n: ma3rftch dayrin pointer ms khdmnaha
 * @index: fiin andiru changement
 * Return: 1 if kllch daz mzn -1 ila knt ktrr mn 64
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(long int) * 8)
		return (-1);
	*n |= (1UL << index);
	return (1);
}
