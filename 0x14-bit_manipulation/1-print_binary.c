#include "main.h"
/**
 * print_binary - func print binary
 * @n: num in dec
*/
void print_binary(unsigned long int n)
{
	int i = 63, check = 0, current;

	for (; i >= 0; i--)
	{
		current = n >> i;
		if (current & 1)
		{
			_putchar('1');
			check++;
		}
		else if (check)
			_putchar('0');
	}
	if (!check)
		_putchar('0');
}
