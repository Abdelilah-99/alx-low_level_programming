#include "main.h"
/**
 * get_endianness - check if it big end or not
 * Return: 0 or 1
 */
int get_endianness(void)
{
	unsigned int i;
	char *c = (char *)&i;

	if (*c)
		return (1);
	return (0);
}
