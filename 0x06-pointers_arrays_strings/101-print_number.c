#include "main.h"
/**
 * print_number - ko
 * @n: jjj
 */
void print_number(int n)
{
	int *p;

	p = &n;
	if (n < 0)
	{
		_putchar('-');
		*p *= -1;
	}
	int test = 1;

	while (*p / test >= 10)
	{
		test *= 10;
	}
	while (test > 0)
	{
		_putchar(*p / test + 48);
		*p %= test;
		test = test / 10;
	}
}

