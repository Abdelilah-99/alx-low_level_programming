#include "main.h"
/**
 * _print_rev_recursion - ko
 * @s: yes ko
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
		_putchar('\0');
	}
}
