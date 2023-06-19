#include "main.h"
/**
 * *_strpbrk - juu
 * @s: shh
 * @accept: wee
 * Return: Sor null
 */
char *_strpbrk(char *s, char *accept)
{
	for (; *s; s++)
	{
		int j;

		for (j = 0; accept[j]; j++)
		{
			if (*s == accept[j])
			{
				return (s);
			}
		}
	}
	return (NULL);
}
