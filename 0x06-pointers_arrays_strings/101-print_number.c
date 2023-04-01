#include "main.h"
/**
 * print_number - ko
 * @n: jjj
 */
void print_number(int n)
{
	unsigned int s;
	int test = 1;

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}
	s = n;
	while (s / test >= 10)
	{
		test *= 10;
	}
	while (test > 0)
	{
		_putchar(s / test + 48);
		s %= test;
		test = test / 10;
	}
}
