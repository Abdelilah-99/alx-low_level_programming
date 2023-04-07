#include "main.h"
/**
 * *_memset - that's a good way to learn
 * @s: pointer to b
 * @b: booo
 * @n: nnno
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
