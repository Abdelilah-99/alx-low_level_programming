#include "main.h"
/**
 * rev_string - it's lik a game when u reversing a string
 * u all have to do is to manupulating with carac
 * @s: adressing
 */
void rev_string(char *s)
{
	int a = 0, b, c;
	char d;

	while (s[a] != '\0')
	a++;
	c = a - 1;
	for (b = 0; c >= 0 && b < c; c--, b++)
	{
		d = s[b];
		s[b] = s[c];
		s[c] = d;
	}
}
