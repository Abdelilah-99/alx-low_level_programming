#include "main.h"
/**
 * _puts_recursion - mk
 * @s: tst
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
	putchar(*s);
	_puts_recursion(s + 1);
	}
	else
	putchar('\n');
}
