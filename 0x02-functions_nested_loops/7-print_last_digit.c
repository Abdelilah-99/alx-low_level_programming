#include "main.h"
/**
 * print_last_digit - hu
 * @n: we
 * Return: Return 0
 */
int print_last_digit(int n)
{
	int s = n % 10;

	if (s < 0)
		s *= -1;
	_putchar(s + '0');
	return (s);
}
