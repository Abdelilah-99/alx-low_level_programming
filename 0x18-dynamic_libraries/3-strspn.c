#include "main.h"
/**
 * _strspn - ppp
 * @s: ddd
 * @accept: jdjhd
 * Return: i
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	unsigned int j;

	for (; *s; s++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (*s == accept[j])
			{
				i++;
				break;
			}
		}
		if (accept[j] == '\0')
			break;
	}
	return (i);
}
