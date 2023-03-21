#include "main.h"
/**
 * print_alphabet_x10 - ten
 */
void print_alphabet_x10(void)
{
	int c, i = 0;

	while (i <= 9)
	{
		i++;
		for (c = 'a'; c <= 'z'; c++)
		{
			putchar(c);
		}
			putchar('\n');
	}
}
