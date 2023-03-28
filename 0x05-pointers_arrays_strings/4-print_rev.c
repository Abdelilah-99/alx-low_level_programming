#include "main.h"
/**
 * print_rev - its getting fun actually it just matter of brain
 * @s: i thing i started to get pointer
 */
void print_rev(char *s)
{
	int i = 0, n = 0;

	while (s[n] != '\0')
		n++;
	for (i = n - i - 1; i >= 0; i--)
	{
		putchar(s[i]);
	}
	putchar('\n');
}
